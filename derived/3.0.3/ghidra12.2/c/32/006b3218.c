
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006b3218(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined4 *local_58;
  undefined4 local_34;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    local_60 = (undefined8 *)((ulong)local_60 & 0xffffffffffff0000);
    iVar4 = nn::sf::hipc::client::QueryPointerBufferSize(&local_60,*(undefined4 *)(param_1 + 4));
    local_98 = CONCAT44(local_98._4_4_,iVar4);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_98);
    }
    *(undefined2 *)(param_1 + 2) = local_60._0_2_;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  uVar1 = *(undefined2 *)(param_1 + 2);
  uVar3 = *(undefined4 *)(param_1 + 4);
  puVar6 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  uVar2 = DAT_0414b708;
  local_80 = CONCAT44(local_80._4_4_,0x100000);
  local_98 = DAT_0414b708;
  local_60 = &local_98;
  local_90 = 0xc;
  uStack_88 = DAT_0414b718;
  *puVar6 = 0x10006;
  puVar6[1] = 0xc;
  local_98._1_1_ = (char)((ulong)uVar2 >> 8);
  if (local_98._1_1_ != '\0') {
    puVar6[2] = 0;
  }
  local_34 = 9;
  local_98 = uVar2;
  local_70 = param_3;
  uStack_68 = param_4;
  local_58 = puVar6;
  uVar7 = FUN_006afb60(&local_60,1,&local_70,&local_34,uVar1,0x30);
  if ((int)uVar7 == 0) {
    puVar9 = (undefined8 *)
             ((long)local_58 + (ulong)*(byte *)((long)local_60 + 0x17) * 4 + 0xf &
             0xfffffffffffffff0);
    *puVar9 = 0x149434653;
    puVar9[1] = param_5 & 0xffffffff;
    puVar9[2] = 0;
    puVar9[3] = 0;
    uVar2 = param_2[1];
    puVar9[2] = *param_2;
    puVar9[3] = uVar2;
    uVar5 = nn::sf::cmif::GetInlineContext();
    *(undefined4 *)((long)puVar9 + 0xc) = uVar5;
    uVar7 = nn::sf::hipc::SendSyncRequest(uVar3,puVar6,0x100);
    if ((int)uVar7 == 0) {
      local_98 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      FUN_006af700(&local_98,puVar6);
      piVar8 = (int *)(local_98 + (uStack_78 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
      if (*piVar8 == 0x4f434653) {
        uVar7 = *(ulong *)(piVar8 + 2);
        if ((int)uVar7 != 0) {
          nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar7 & 0xffffffff);
        }
      }
      else {
        uVar7 = 0x1a80a;
      }
      goto LAB_006b33c8;
    }
  }
  uVar7 = uVar7 & 0xffffffff;
LAB_006b33c8:
  return uVar7 & 0xffffffff;
}

