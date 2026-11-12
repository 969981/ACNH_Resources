
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006b4e04(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long *param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  ulong uStack_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined4 *local_58;
  
  plVar13 = (long *)*param_2;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    local_60 = (undefined1 *)((ulong)local_60 & 0xffffffffffff0000);
    iVar4 = nn::sf::hipc::client::QueryPointerBufferSize(&local_60,*(undefined4 *)(param_1 + 4));
    local_a0 = CONCAT44(local_a0._4_4_,iVar4);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_a0);
    }
    *(undefined2 *)(param_1 + 2) = local_60._0_2_;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  uVar1 = *(undefined2 *)(param_1 + 2);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar6 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  uVar3 = DAT_0414b6b4;
  local_88 = CONCAT44(local_88._4_4_,0xc0000);
  local_a0 = DAT_0414b6b4;
  local_98 = 8;
  uStack_90 = DAT_0414b6c4;
  *puVar6 = 0x10006;
  puVar6[1] = 8;
  local_a0._1_1_ = (char)((ulong)uVar3 >> 8);
  if (local_a0._1_1_ != '\0') {
    puVar6[2] = 0;
  }
  local_74 = 9;
  local_a0 = uVar3;
  local_70 = param_3;
  uStack_68 = param_4;
  local_60 = (undefined1 *)&local_a0;
  local_58 = puVar6;
  uVar7 = FUN_006afb60(&local_60,1,&local_70,&local_74,uVar1,0x20);
  if ((int)uVar7 == 0) {
    puVar12 = (undefined8 *)
              ((long)local_58 + (ulong)(byte)local_60[0x17] * 4 + 0xf & 0xfffffffffffffff0);
    *puVar12 = 0x149434653;
    puVar12[1] = param_5 & 0xffffffff;
    uVar5 = nn::sf::cmif::GetInlineContext();
    *(undefined4 *)((long)puVar12 + 0xc) = uVar5;
    uVar7 = nn::sf::hipc::SendSyncRequest(uVar2,puVar6,0x100);
    if ((int)uVar7 == 0) {
      local_a0 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      FUN_006af700(&local_a0,puVar6);
      piVar10 = (int *)(local_a0 + (uStack_80 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
      if (*piVar10 == 0x4f434653) {
        uVar7 = *(ulong *)(piVar10 + 2);
        if ((int)uVar7 == 0) {
          puVar12 = (undefined8 *)(**(code **)(*(long *)*param_6 + 0x10))();
          puVar8 = (undefined1 *)(**(code **)*puVar12)();
          iVar4 = *(int *)(local_a0 + (local_88 >> 0x20 & 0xff) * 4);
          if (iVar4 == 0) {
            *puVar8 = 0;
            plVar9 = (long *)*param_6;
            *param_6 = 0;
            if (plVar9 == (long *)0x0) {
              *param_6 = 0;
              plVar9 = (long *)*plVar13;
              *plVar13 = 0;
            }
            else {
              (**(code **)(*plVar9 + 8))();
              lVar11 = *param_6;
              *param_6 = 0;
              plVar9 = (long *)*plVar13;
              *plVar13 = lVar11;
            }
          }
          else {
            *puVar8 = 1;
            puVar8[1] = 0;
            *(int *)(puVar8 + 4) = iVar4;
            lVar11 = *param_6;
            *param_6 = 0;
            plVar9 = (long *)*plVar13;
            *plVar13 = lVar11;
          }
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 8))();
          }
          uVar7 = 0;
        }
        else {
          nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar7 & 0xffffffff);
        }
      }
      else {
        uVar7 = 0x1a80a;
      }
      goto LAB_006b5014;
    }
  }
  uVar7 = uVar7 & 0xffffffff;
LAB_006b5014:
  return uVar7 & 0xffffffff;
}

