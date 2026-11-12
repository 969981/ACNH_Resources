
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006b3014(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong uStack_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined4 *local_58;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    local_60 = (undefined1 *)((ulong)local_60 & 0xffffffffffff0000);
    iVar6 = nn::sf::hipc::client::QueryPointerBufferSize(&local_60,*(undefined4 *)(param_1 + 4));
    local_a0 = CONCAT44(local_a0._4_4_,iVar6);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_a0);
    }
    *(undefined2 *)(param_1 + 2) = local_60._0_2_;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  uVar1 = *(undefined2 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  puVar8 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  uVar2 = DAT_0414b708;
  local_88 = CONCAT44(local_88._4_4_,0x100000);
  local_a0 = DAT_0414b708;
  local_98 = 0xc;
  uStack_90 = DAT_0414b718;
  *puVar8 = 0x10006;
  puVar8[1] = 0xc;
  local_a0._1_1_ = (char)((ulong)uVar2 >> 8);
  if (local_a0._1_1_ != '\0') {
    puVar8[2] = 0;
  }
  local_74 = 9;
  local_a0 = uVar2;
  local_70 = param_4;
  uStack_68 = param_5;
  local_60 = (undefined1 *)&local_a0;
  local_58 = puVar8;
  uVar9 = FUN_006afb60(&local_60,1,&local_70,&local_74,uVar1,0x30);
  if ((int)uVar9 == 0) {
    puVar11 = (undefined8 *)
              ((long)local_58 + (ulong)(byte)local_60[0x17] * 4 + 0xf & 0xfffffffffffffff0);
    *puVar11 = 0x149434653;
    puVar11[1] = param_6 & 0xffffffff;
    puVar11[2] = 0;
    puVar11[3] = 0;
    uVar2 = param_3[1];
    puVar11[2] = *param_3;
    puVar11[3] = uVar2;
    uVar7 = nn::sf::cmif::GetInlineContext();
    *(undefined4 *)((long)puVar11 + 0xc) = uVar7;
    uVar9 = nn::sf::hipc::SendSyncRequest(uVar5,puVar8,0x100);
    if ((int)uVar9 == 0) {
      local_a0 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      FUN_006af700(&local_a0,puVar8);
      piVar10 = (int *)(local_a0 + (uStack_80 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
      if (*piVar10 == 0x4f434653) {
        uVar9 = *(ulong *)(piVar10 + 2);
        if ((int)uVar9 == 0) {
          *param_2 = *(undefined8 *)(piVar10 + 4);
          uVar2 = *(undefined8 *)(piVar10 + 6);
          uVar3 = *(undefined8 *)(piVar10 + 8);
          uVar4 = *(undefined8 *)(piVar10 + 0xc);
          param_2[3] = *(undefined8 *)(piVar10 + 10);
          param_2[4] = uVar4;
          param_2[1] = uVar2;
          param_2[2] = uVar3;
        }
        else {
          nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar9 & 0xffffffff);
        }
      }
      else {
        uVar9 = 0x1a80a;
      }
      goto LAB_006b31e8;
    }
  }
  uVar9 = uVar9 & 0xffffffff;
LAB_006b31e8:
  return uVar9 & 0xffffffff;
}

