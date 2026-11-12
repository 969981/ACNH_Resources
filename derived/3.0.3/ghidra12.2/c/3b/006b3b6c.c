
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006b3b6c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    local_70 = local_70 & 0xffffffffffff0000;
    iVar4 = nn::sf::hipc::client::QueryPointerBufferSize(&local_70,*(undefined4 *)(param_1 + 4));
    local_b0 = CONCAT44(local_b0._4_4_,iVar4);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_b0);
    }
    *(undefined2 *)(param_1 + 2) = (undefined2)local_70;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  uVar1 = *(undefined2 *)(param_1 + 2);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar6 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  uVar3 = DAT_0414af2c;
  local_58 = 0xf0000;
  local_70 = DAT_0414af2c;
  local_80 = &local_70;
  local_68 = 8;
  uStack_60 = DAT_0414af3c;
  *puVar6 = 0x110006;
  puVar6[1] = 8;
  local_70._1_1_ = (char)((ulong)uVar3 >> 8);
  if (local_70._1_1_ != '\0') {
    puVar6[2] = 0;
  }
  local_88 = 0x500000009;
  local_b0 = param_2;
  local_a8 = param_3;
  local_a0 = param_4;
  local_98 = param_5;
  local_78 = puVar6;
  local_70 = uVar3;
  uVar7 = FUN_006afb60(&local_80,2,&local_b0,&local_88,uVar1,0x20);
  if ((int)uVar7 == 0) {
    puVar9 = (undefined8 *)
             ((long)local_78 + (ulong)*(byte *)((long)local_80 + 0x17) * 4 + 0xf &
             0xfffffffffffffff0);
    *puVar9 = 0x149434653;
    puVar9[1] = param_6 & 0xffffffff;
    uVar5 = nn::sf::cmif::GetInlineContext();
    *(undefined4 *)((long)puVar9 + 0xc) = uVar5;
    uVar7 = nn::sf::hipc::SendSyncRequest(uVar2,puVar6,0x100);
    if ((int)uVar7 == 0) {
      local_b0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      local_a0 = 0;
      FUN_006af700(&local_b0,puVar6);
      piVar8 = (int *)(local_b0 + (uStack_90 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
      if (*piVar8 == 0x4f434653) {
        uVar7 = *(ulong *)(piVar8 + 2);
        if ((int)uVar7 != 0) {
          nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar7 & 0xffffffff);
        }
      }
      else {
        uVar7 = 0x1a80a;
      }
      goto LAB_006b3d1c;
    }
  }
  uVar7 = uVar7 & 0xffffffff;
LAB_006b3d1c:
  return uVar7 & 0xffffffff;
}

