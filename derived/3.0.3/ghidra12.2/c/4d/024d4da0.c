
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_024d4da0(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int local_60 [2];
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  int local_28;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_3);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar6 = FUN_024d5100(param_3);
      bVar2 = **(char **)(lVar6 + 8) != '\0';
      if ((**(char **)(lVar6 + 8) == '\0') || ((param_2 & 1) != 0)) goto LAB_024d4f28;
      lVar6 = param_1 + 0x1ee8;
      FUN_0252d8f0(&local_58,lVar6);
      uVar4 = FUN_0277d7b4(param_3,&local_58);
      if ((uVar4 & 1) != 0) {
        local_50 = *(undefined4 *)param_3;
        uStack_4c = *(undefined4 *)((long)param_3 + 4);
        local_48 = 0;
        lVar7 = *(long *)puVar1;
        local_58 = PTR_DAT_04bc0510 + 0x10;
        uVar3 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar1 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(param_3);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
               (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
              local_48 = lVar7;
            }
          }
        }
        local_28 = FUN_01ad78cc(&local_58);
        if ((local_28 != 0x67) && (local_60[0] = FUN_01ad78cc(&local_58), local_60[0] != 0x68)) {
          *(undefined8 *)(param_1 + 0x1980) = 0;
          *(undefined8 *)(param_1 + 0x1988) = 0;
          *(undefined8 *)(param_1 + 0x1990) = 0;
          *(undefined8 *)(param_1 + 0x1998) = 0;
          *(undefined8 *)(param_1 + 0x19a0) = 0;
          *(undefined8 *)(param_1 + 0x19a8) = 0;
          *(undefined8 *)(param_1 + 0x19b0) = 0;
          *(undefined8 *)(param_1 + 0x19b8) = 0;
          *(undefined8 *)(param_1 + 0x19c0) = 0;
          *(undefined8 *)(param_1 + 0x19c8) = 0;
          *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
          *(undefined8 *)(param_1 + 0x19d0) = 0;
          *(undefined2 *)(param_1 + 0x19d8) = 0;
          *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
          *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
          *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
          *(undefined8 *)(param_1 + 0x1980) = *param_3;
          uVar4 = FUN_01af0020(&local_58);
          if ((uVar4 & 1) == 0) {
            uVar4 = FUN_024d5660(param_3);
            if ((uVar4 & 1) == 0) {
              uVar5 = *param_3;
            }
            else {
              FUN_0252d8f0(&local_28,lVar6);
              FUN_02326578(&local_28,lVar6,1);
              uVar3 = FUN_02326548(param_1);
              if (2 < uVar3) {
                local_28 = _DAT_05586008;
                uStack_24 = DAT_0558600c;
              }
              uVar5 = CONCAT44(uStack_24,local_28);
            }
          }
          else {
            FUN_0252d8f0(local_60,lVar6);
            FUN_01af3d60(&local_28,local_60,1);
            uVar5 = CONCAT44(uStack_24,local_28);
          }
          *(undefined8 *)(param_1 + 0x1988) = uVar5;
          local_28 = FUN_01ad78cc(&local_58);
          if (local_28 - 0x66U < 3) {
            local_28 = 0x122;
            bVar2 = 1;
            *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
            *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
            *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
            *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
            *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
            *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
            *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
            *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
            *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
            *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
            *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
            *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
            *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
            *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
            *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
            *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
            lVar6 = 0;
            if (*(long *)(param_1 + 0x70) != 0) {
              lVar6 = *(long *)(param_1 + 0x70) + 0x278;
            }
            FUN_03ebb160(lVar6,0x122);
          }
          else {
            bVar2 = FUN_02372864(param_1,0x122,(undefined8 *)(param_1 + 0x1960),1);
          }
          goto LAB_024d4f28;
        }
      }
    }
  }
  bVar2 = 0;
LAB_024d4f28:
  return bVar2 & 1;
}

