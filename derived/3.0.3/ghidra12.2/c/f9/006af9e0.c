
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006af9e0(long param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
                  uint param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
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
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  puVar4 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  uVar2 = DAT_0414bc50;
  local_78 = CONCAT44(local_78._4_4_,0xe0000);
  local_90 = DAT_0414bc50;
  local_88 = 9;
  uStack_80 = DAT_0414bc60;
  *puVar4 = 0x1000006;
  puVar4[1] = 9;
  local_90._1_1_ = (char)((ulong)uVar2 >> 8);
  if (local_90._1_1_ != '\0') {
    puVar4[2] = 0;
  }
  local_64 = 6;
  local_90 = uVar2;
  local_60 = param_2;
  uStack_58 = param_3;
  local_50 = (undefined1 *)&local_90;
  local_48 = puVar4;
  uVar5 = FUN_006afb60(&local_50,1,&local_60,&local_64,0,0x22);
  if ((int)uVar5 == 0) {
    puVar7 = (undefined8 *)
             ((long)local_48 + (ulong)(byte)local_50[0x17] * 4 + 0xf & 0xfffffffffffffff0);
    *puVar7 = 0x149434653;
    puVar7[1] = (ulong)param_5;
    *(undefined2 *)(puVar7 + 2) = param_4;
    uVar3 = nn::sf::cmif::GetInlineContext();
    *(undefined4 *)((long)puVar7 + 0xc) = uVar3;
    uVar5 = nn::sf::hipc::SendSyncRequest(uVar1,puVar4,0x100);
    if ((int)uVar5 == 0) {
      local_90 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      FUN_006af700(&local_90,puVar4);
      piVar6 = (int *)(local_90 + (uStack_70 >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
      if (*piVar6 == 0x4f434653) {
        uVar5 = *(ulong *)(piVar6 + 2);
        if ((int)uVar5 != 0) {
          nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar5 & 0xffffffff);
        }
      }
      else {
        uVar5 = 0x1a80a;
      }
      goto LAB_006afb3c;
    }
  }
  uVar5 = uVar5 & 0xffffffff;
LAB_006afb3c:
  return uVar5 & 0xffffffff;
}

