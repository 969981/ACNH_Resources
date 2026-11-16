
undefined8 FUN_026b3fc0(long param_1,long param_2,ulong param_3,uint param_4,int *param_5)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  byte local_84 [4];
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  int iStack_6c;
  undefined4 local_68;
  
  local_68 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_78 = 0;
  uStack_74 = 0;
  local_70 = 0;
  iStack_6c = 0;
  if ((param_3 & 1) == 0) goto LAB_026b4190;
  if (DAT_04cd19d8 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_026b4060:
    if (*pbVar7 < 8) goto LAB_026b40d8;
LAB_026b406c:
    if (DAT_0537d558 == (long *)0x0) {
LAB_026b40d0:
      pbVar7 = &DAT_0548e168;
      goto LAB_026b40d8;
    }
    lVar8 = *DAT_0537d558;
    bVar3 = *(byte *)(lVar8 + 0x473);
    pbVar7 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar7 = (byte *)(lVar8 + 0x471);
      }
    }
    local_84[0] = *pbVar7;
    if (7 < local_84[0]) goto LAB_026b40d0;
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar7 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_026b4060;
      }
      goto LAB_026b406c;
    }
LAB_026b40d8:
    local_84[0] = *pbVar7;
    if (7 < local_84[0]) {
      local_84[0] = 0xff;
    }
  }
  lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_84,1);
  if (lVar8 != 0) {
    if ((*(long **)(lVar8 + 0x17f68) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar8 + 0x17f68), puVar5 == (undefined8 *)0x0)) {
      puVar5 = (undefined8 *)(*(long *)(lVar8 + 0x17f50) + *(long *)(lVar8 + 0x17f48));
      local_68 = *(undefined4 *)(puVar5 + 3);
      local_80 = (int)*puVar5;
      uStack_7c = (undefined4)((ulong)*puVar5 >> 0x20);
      local_78 = (undefined4)puVar5[1];
      uStack_74 = (undefined4)((ulong)puVar5[1] >> 0x20);
      local_70 = (undefined4)puVar5[2];
      iStack_6c = (int)((ulong)puVar5[2] >> 0x20);
    }
    else {
      uVar6 = (**(code **)*puVar5)();
      puVar5 = (undefined8 *)(*(long *)(lVar8 + 0x17f50) + *(long *)(lVar8 + 0x17f48));
      local_68 = *(undefined4 *)(puVar5 + 3);
      local_80 = (int)*puVar5;
      uStack_7c = (undefined4)((ulong)*puVar5 >> 0x20);
      local_78 = (undefined4)puVar5[1];
      uStack_74 = (undefined4)((ulong)puVar5[1] >> 0x20);
      local_70 = (undefined4)puVar5[2];
      iStack_6c = (int)((ulong)puVar5[2] >> 0x20);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
  }
LAB_026b4190:
  iVar4 = local_80;
  if (param_5 != (int *)0x0) {
    *param_5 = -1;
  }
  iVar11 = 0;
  iVar12 = 0;
  lVar8 = param_1 + 0x1094c;
  do {
    lVar9 = lVar8 + (long)iVar12 * 0x2c;
    iVar2 = *(int *)(lVar9 + 0x24);
    if (iVar2 == 6 || iVar2 == 1) {
      lVar10 = lVar8 + (long)iVar12 * 0x2c;
      uVar6 = FUN_0277d7b4(lVar10,param_2);
      if ((((uVar6 & 1) != 0) && (*(char *)(lVar10 + 3) == *(char *)(param_2 + 3))) &&
         ((*(int *)(lVar10 + 4) == *(int *)(param_2 + 4) &&
          (iVar2 = *(int *)(lVar9 + 8), iVar2 != 0)))) {
        if (iVar2 == iVar4) {
          lVar9 = lVar8 + (long)iVar12 * 0x2c;
          if ((CONCAT44(local_78,uStack_7c) == *(long *)(lVar9 + 0xc) &&
              CONCAT44(local_70,uStack_74) == *(long *)(lVar9 + 0x14)) &&
              iStack_6c == *(int *)(lVar9 + 0x1c)) goto LAB_026b4318;
        }
        else if (iVar4 == 0) goto LAB_026b4318;
      }
    }
    iVar11 = iVar11 + 1;
    iVar12 = iVar12 + 1;
  } while (iVar11 != 0x18);
  iVar12 = 0;
  lVar8 = param_1 + 0x10d6c;
  do {
    lVar9 = lVar8 + (long)iVar12 * 0x2c;
    iVar2 = *(int *)(lVar9 + 0x24);
    if (iVar2 == 6 || iVar2 == 1) {
      lVar10 = lVar8 + (long)iVar12 * 0x2c;
      uVar6 = FUN_0277d7b4(lVar10,param_2);
      if ((((uVar6 & 1) != 0) && (*(char *)(lVar10 + 3) == *(char *)(param_2 + 3))) &&
         ((*(int *)(lVar10 + 4) == *(int *)(param_2 + 4) &&
          (iVar2 = *(int *)(lVar9 + 8), iVar2 != 0)))) {
        if (iVar2 == iVar4) {
          lVar9 = lVar8 + (long)iVar12 * 0x2c;
          if ((CONCAT44(local_78,uStack_7c) == *(long *)(lVar9 + 0xc) &&
              CONCAT44(local_70,uStack_74) == *(long *)(lVar9 + 0x14)) &&
              iStack_6c == *(int *)(lVar9 + 0x1c)) {
LAB_026b4318:
            if (param_5 != (int *)0x0) {
              *param_5 = iVar11;
            }
            return 1;
          }
        }
        else if (iVar4 == 0) goto LAB_026b4318;
      }
    }
    iVar11 = iVar11 + 1;
    iVar12 = iVar12 + 1;
    if (iVar11 == 0x38) {
      if ((param_4 & 1) == 0) {
        iVar11 = 0;
        param_1 = param_1 + 0x112ec;
        do {
          lVar8 = param_1 + (long)iVar11 * 0x4c;
          iVar12 = *(int *)(lVar8 + 0x40);
          if (iVar12 == 6 || iVar12 == 1) {
            lVar9 = param_1 + (long)iVar11 * 0x4c;
            uVar6 = FUN_0277d7b4(lVar9,param_2);
            if (((((uVar6 & 1) != 0) && (*(char *)(lVar9 + 3) == *(char *)(param_2 + 3))) &&
                (*(int *)(lVar9 + 4) == *(int *)(param_2 + 4))) &&
               (iVar12 = *(int *)(lVar8 + 8), iVar12 != 0)) {
              if (iVar12 == iVar4) {
                lVar8 = param_1 + (long)iVar11 * 0x4c;
                if ((CONCAT44(local_78,uStack_7c) == *(long *)(lVar8 + 0xc) &&
                    CONCAT44(local_70,uStack_74) == *(long *)(lVar8 + 0x14)) &&
                    iStack_6c == *(int *)(lVar8 + 0x1c)) {
                  return 1;
                }
              }
              else if (iVar4 == 0) {
                return 1;
              }
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != 0x40);
      }
      return 0;
    }
  } while( true );
}

