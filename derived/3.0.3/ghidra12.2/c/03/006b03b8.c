
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006b03b8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong uStack_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined4 *local_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    local_50 = (undefined1 *)((ulong)local_50 & 0xffffffffffff0000);
    iVar4 = nn::sf::hipc::client::QueryPointerBufferSize(&local_50,*(undefined4 *)(param_1 + 4));
    local_90 = CONCAT44(local_90._4_4_,iVar4);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_90);
    }
    *(undefined2 *)(param_1 + 2) = local_50._0_2_;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  uVar1 = *(undefined2 *)(param_1 + 2);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar6 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  uVar3 = DAT_0414b6b4;
  local_78 = CONCAT44(local_78._4_4_,0xc0000);
  local_90 = DAT_0414b6b4;
  local_88 = 8;
  uStack_80 = DAT_0414b6c4;
  *puVar6 = 0x10006;
  puVar6[1] = 8;
  local_90._1_1_ = (char)((ulong)uVar3 >> 8);
  if (local_90._1_1_ != '\0') {
    puVar6[2] = 0;
  }
  local_64 = 9;
  local_90 = uVar3;
  local_60 = param_2;
  uStack_58 = param_3;
  local_50 = (undefined1 *)&local_90;
  local_48 = puVar6;
  uVar7 = FUN_006afb60(&local_50,1,&local_60,&local_64,uVar1,0x20);
  if ((int)uVar7 == 0) {
    puVar9 = (undefined8 *)
             ((long)local_48 + (ulong)(byte)local_50[0x17] * 4 + 0xf & 0xfffffffffffffff0);
    *puVar9 = 0x149434653;
    puVar9[1] = param_4 & 0xffffffff;
    uVar5 = nn::sf::cmif::GetInlineContext();
    *(undefined4 *)((long)puVar9 + 0xc) = uVar5;
    uVar7 = nn::sf::hipc::SendSyncRequest(uVar2,puVar6,0x100);
    if ((int)uVar7 == 0) {
      local_90 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      FUN_006af700(&local_90,puVar6);
      piVar8 = (int *)(local_90 + (uStack_70 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
      if (*piVar8 == 0x4f434653) {
        uVar7 = *(ulong *)(piVar8 + 2);
        if ((int)uVar7 != 0) {
          nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar7 & 0xffffffff);
        }
      }
      else {
        uVar7 = 0x1a80a;
      }
      goto LAB_006b0554;
    }
  }
  uVar7 = uVar7 & 0xffffffff;
LAB_006b0554:
  return uVar7 & 0xffffffff;
}

