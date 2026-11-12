
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006b57d4(long param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,long *param_8)

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
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  plVar13 = (long *)*param_2;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    local_80 = local_80 & 0xffffffffffff0000;
    iVar4 = nn::sf::hipc::client::QueryPointerBufferSize(&local_80,*(undefined4 *)(param_1 + 4));
    local_c0 = CONCAT44(local_c0._4_4_,iVar4);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_c0);
    }
    *(undefined2 *)(param_1 + 2) = (undefined2)local_80;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  uVar1 = *(undefined2 *)(param_1 + 2);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar6 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  uVar3 = DAT_0414b6ec;
  local_68 = 0xe0000;
  local_80 = DAT_0414b6ec;
  local_90 = &local_80;
  local_78 = 8;
  uStack_70 = DAT_0414b6fc;
  *puVar6 = 0x20006;
  puVar6[1] = 8;
  local_80._1_1_ = (char)((ulong)uVar3 >> 8);
  if (local_80._1_1_ != '\0') {
    puVar6[2] = 0;
  }
  local_98 = 0x900000009;
  local_c0 = param_3;
  local_b8 = param_4;
  local_b0 = param_5;
  local_a8 = param_6;
  local_88 = puVar6;
  local_80 = uVar3;
  uVar7 = FUN_006afb60(&local_90,2,&local_c0,&local_98,uVar1,0x20);
  if ((int)uVar7 == 0) {
    puVar12 = (undefined8 *)
              ((long)local_88 + (ulong)*(byte *)((long)local_90 + 0x17) * 4 + 0xf &
              0xfffffffffffffff0);
    *puVar12 = 0x149434653;
    puVar12[1] = (ulong)param_7;
    uVar5 = nn::sf::cmif::GetInlineContext();
    *(undefined4 *)((long)puVar12 + 0xc) = uVar5;
    uVar7 = nn::sf::hipc::SendSyncRequest(uVar2,puVar6,0x100);
    if ((int)uVar7 == 0) {
      local_c0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN_006af700(&local_c0,puVar6);
      piVar10 = (int *)(local_c0 + (uStack_a0 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
      if (*piVar10 == 0x4f434653) {
        uVar7 = *(ulong *)(piVar10 + 2);
        if ((int)uVar7 == 0) {
          puVar12 = (undefined8 *)(**(code **)(*(long *)*param_8 + 0x10))();
          puVar8 = (undefined1 *)(**(code **)*puVar12)();
          iVar4 = *(int *)(local_c0 + (local_a8 >> 0x20 & 0xff) * 4);
          if (iVar4 == 0) {
            *puVar8 = 0;
            plVar9 = (long *)*param_8;
            *param_8 = 0;
            if (plVar9 == (long *)0x0) {
              *param_8 = 0;
              plVar9 = (long *)*plVar13;
              *plVar13 = 0;
            }
            else {
              (**(code **)(*plVar9 + 8))();
              lVar11 = *param_8;
              *param_8 = 0;
              plVar9 = (long *)*plVar13;
              *plVar13 = lVar11;
            }
          }
          else {
            *puVar8 = 1;
            puVar8[1] = 0;
            *(int *)(puVar8 + 4) = iVar4;
            lVar11 = *param_8;
            *param_8 = 0;
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
      goto LAB_006b59f8;
    }
  }
  uVar7 = uVar7 & 0xffffffff;
LAB_006b59f8:
  return uVar7 & 0xffffffff;
}

