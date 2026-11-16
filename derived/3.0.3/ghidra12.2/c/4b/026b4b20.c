
undefined8 FUN_026b4b20(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 auStack_38 [3];
  char local_35;
  int local_34;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  if (*(long *)puVar1 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_58 = 0;
      FUN_01afbaa4(auStack_38,param_2,&local_58);
      if ((param_3 & 1) == 0) {
        param_1 = param_1 + 0x10d6c;
        iVar6 = 0;
        if ((param_4 & 1) == 0) {
          lVar7 = *(long *)puVar1;
          do {
            lVar5 = param_1 + (long)iVar6 * 0x2c;
            uVar2 = FUN_0277d6c4(lVar5);
            lVar4 = *(long *)puVar1;
            if (lVar4 != 0) {
              lVar7 = *(long *)(lVar7 + 0x57e58);
              uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if (((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
                 (*(int *)(param_1 + (long)iVar6 * 0x2c + 8) != 0)) {
                uVar3 = FUN_0277d7b4(auStack_38,lVar5);
                if ((uVar3 & 1) != 0) {
                  return 1;
                }
                lVar4 = *(long *)puVar1;
              }
            }
            iVar6 = iVar6 + 1;
            lVar7 = lVar4;
          } while (iVar6 != 0x20);
        }
        else {
          lVar7 = *(long *)puVar1;
          do {
            lVar5 = param_1 + (long)iVar6 * 0x2c;
            uVar2 = FUN_0277d6c4(lVar5);
            lVar4 = *(long *)puVar1;
            if (lVar4 != 0) {
              lVar7 = *(long *)(lVar7 + 0x57e58);
              uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if (((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
                 (*(int *)(param_1 + (long)iVar6 * 0x2c + 8) != 0)) {
                local_5c = 0;
                FUN_01afbaa4(&local_58,lVar5,&local_5c);
                uVar3 = FUN_0277d7b4(auStack_38,&local_58);
                lVar4 = *(long *)puVar1;
                if ((((uVar3 & 1) != 0) && (local_35 == local_58._3_1_)) && (local_34 == local_54))
                {
                  return 1;
                }
              }
            }
            iVar6 = iVar6 + 1;
            lVar7 = lVar4;
          } while (iVar6 != 0x20);
        }
      }
      else {
        param_1 = param_1 + 0x1094c;
        iVar6 = 0;
        if ((param_4 & 1) == 0) {
          lVar7 = *(long *)puVar1;
          do {
            lVar5 = param_1 + (long)iVar6 * 0x2c;
            uVar2 = FUN_0277d6c4(lVar5);
            lVar4 = *(long *)puVar1;
            if (lVar4 != 0) {
              lVar7 = *(long *)(lVar7 + 0x57e58);
              uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if (((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
                 (*(int *)(param_1 + (long)iVar6 * 0x2c + 8) != 0)) {
                uVar3 = FUN_0277d7b4(auStack_38,lVar5);
                if ((uVar3 & 1) != 0) {
                  return 1;
                }
                lVar4 = *(long *)puVar1;
              }
            }
            iVar6 = iVar6 + 1;
            lVar7 = lVar4;
          } while (iVar6 != 0x18);
        }
        else {
          lVar7 = *(long *)puVar1;
          do {
            lVar5 = param_1 + (long)iVar6 * 0x2c;
            uVar2 = FUN_0277d6c4(lVar5);
            lVar4 = *(long *)puVar1;
            if (lVar4 != 0) {
              lVar7 = *(long *)(lVar7 + 0x57e58);
              uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if (((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
                 (*(int *)(param_1 + (long)iVar6 * 0x2c + 8) != 0)) {
                local_5c = 0;
                FUN_01afbaa4(&local_58,lVar5,&local_5c);
                uVar3 = FUN_0277d7b4(auStack_38,&local_58);
                lVar4 = *(long *)puVar1;
                if ((((uVar3 & 1) != 0) && (local_35 == local_58._3_1_)) && (local_34 == local_54))
                {
                  return 1;
                }
              }
            }
            iVar6 = iVar6 + 1;
            lVar7 = lVar4;
          } while (iVar6 != 0x18);
        }
      }
      return 0;
    }
  }
  return 1;
}

