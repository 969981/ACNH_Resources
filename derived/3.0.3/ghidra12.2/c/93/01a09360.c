
undefined8 FUN_01a09360(long param_1,undefined1 *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_18;
  undefined4 local_14;
  
  if (0 < *(int *)(param_1 + 0xa8)) {
    uVar7 = 0;
    local_18 = param_3;
    local_14 = param_3;
    do {
      if (uVar7 < *(uint *)(param_1 + 0x88)) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x90) + uVar7 * 8);
      }
      else {
        lVar3 = 0;
      }
      uVar4 = (**(code **)(*(long *)(lVar3 + 0x30) + 0x118))((long *)(lVar3 + 0x30),&local_18);
      if ((uVar4 & 1) != 0) {
        uVar6 = *(uint *)(*(long *)(*(long *)(param_1 + 0x90) + uVar7 * 8) + 0xd8);
        if (0xff < (int)uVar6) {
          uVar6 = 0x100;
        }
        puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar1 = *puVar5 ^ *puVar5 << 0xb;
        uVar2 = puVar5[3];
        *puVar5 = puVar5[1];
        puVar5[1] = puVar5[2];
        uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
        puVar5[2] = uVar2;
        puVar5[3] = uVar1;
        *param_2 = (char)((ulong)uVar1 * (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) >> 0x20
                         );
        return 1;
      }
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)*(int *)(param_1 + 0xa8));
  }
  return 0;
}

