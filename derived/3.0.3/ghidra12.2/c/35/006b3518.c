
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_006b3518(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
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
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar4 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
  uVar1 = DAT_0414af10;
  local_78 = CONCAT44(local_78._4_4_,0x110000);
  local_90 = DAT_0414af10;
  local_88 = 0xc;
  uStack_80 = DAT_0414af20;
  *puVar4 = 0x100006;
  puVar4[1] = 0xc;
  local_90._1_1_ = (char)((ulong)uVar1 >> 8);
  if (local_90._1_1_ != '\0') {
    puVar4[2] = 0;
  }
  local_64 = 5;
  local_90 = uVar1;
  local_60 = param_3;
  uStack_58 = param_4;
  local_50 = (undefined1 *)&local_90;
  local_48 = puVar4;
  uVar5 = FUN_006afb60(&local_50,1,&local_60,&local_64,0,0x30);
  if ((int)uVar5 == 0) {
    puVar7 = (undefined8 *)
             ((long)local_48 + (ulong)(byte)local_50[0x17] * 4 + 0xf & 0xfffffffffffffff0);
    *puVar7 = 0x149434653;
    puVar7[1] = (ulong)param_5;
    puVar7[2] = 0;
    puVar7[3] = 0;
    uVar1 = param_2[1];
    puVar7[2] = *param_2;
    puVar7[3] = uVar1;
    uVar3 = nn::sf::cmif::GetInlineContext();
    *(undefined4 *)((long)puVar7 + 0xc) = uVar3;
    uVar5 = nn::sf::hipc::SendSyncRequest(uVar2,puVar4,0x100);
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
      goto LAB_006b367c;
    }
  }
  uVar5 = uVar5 & 0xffffffff;
LAB_006b367c:
  return uVar5 & 0xffffffff;
}

