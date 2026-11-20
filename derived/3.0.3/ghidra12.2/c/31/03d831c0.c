
void FUN_03d831c0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *plStack_48;
  
  lVar6 = param_1[0x50];
  plStack_48 = param_1;
  if (*(char *)(lVar6 + 0x20) == '\0') {
    uVar2 = *(uint *)(lVar6 + 0x28);
    if (0xb < uVar2 || (1 << (ulong)(uVar2 & 0x1f) & 0x933U) == 0) {
      if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
        return;
      }
      if (*(char *)((long)param_1 + 0x2c2) != '\0') {
        return;
      }
      if (0xd < uVar2) {
        return;
      }
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x36ccU) == 0) {
        return;
      }
      goto LAB_03d8358c;
    }
  }
  else {
    puVar1 = (uint *)(lVar6 + 0x24);
    if (*(char *)(lVar6 + 0x21) != '\0') {
      puVar1 = (uint *)(lVar6 + 0x28);
    }
    uVar2 = *puVar1;
    if (0xb < uVar2 || (1 << (ulong)(uVar2 & 0x1f) & 0x933U) == 0) {
      if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
        return;
      }
      if (*(char *)((long)param_1 + 0x2c2) != '\0') {
        return;
      }
      if (0xd < uVar2 || (1 << (ulong)(uVar2 & 0x1f) & 0x36ccU) == 0) {
        return;
      }
LAB_03d8358c:
      puVar4 = (undefined8 *)param_1[0x4c];
      *(undefined4 *)(param_1 + 0x57) = param_2;
      *(undefined4 *)((long)param_1 + 700) = param_3;
      local_60 = (undefined *)CONCAT44(param_2,5);
      local_58 = (char *)CONCAT44(param_4,param_3);
      local_50 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,&local_60);
      }
      puVar4 = (undefined8 *)param_1[0x4d];
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,&local_60);
      }
      lVar6 = param_1[0x54];
      if (lVar6 != 0) {
        uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        *(undefined4 *)(lVar6 + 0x40) = uVar3;
      }
      if (param_1[0x55] != 0) {
        *(int *)(param_1[0x55] + 0x40) = (int)param_1[0x57];
      }
      local_60 = PTR_DAT_04bb2020 + 0x10;
      local_58 = "Decide";
      FUN_03d66950(param_1,&local_60,param_1[0x53]);
      if ((*(byte *)((long)param_1 + 0x2c3) & 1) != 0) {
        if ((*(byte *)((long)param_1 + 0x2c2) >> 1 & 1) == 0) {
          FUN_03c839f0(param_1[0x50],1);
          FUN_03c83760(param_1[0x50],3);
          return;
        }
        FUN_03c839f0(param_1[0x50],5);
        FUN_03c83760(param_1[0x50],7);
        goto LAB_03d83530;
      }
      lVar6 = param_1[0x50];
      *(undefined4 *)(lVar6 + 0x2c) = 5;
      do {
        if (*(char *)(lVar6 + 0x20) == '\0') {
          FUN_03c83a50(lVar6,1);
        }
        FUN_03c835a0(lVar6);
      } while (*(int *)(lVar6 + 0x2c) != -0x80000000);
      plVar7 = (long *)param_1[0x50];
      *(undefined4 *)((long)plVar7 + 0x2c) = 7;
      uVar5 = FUN_03c83810(plVar7);
      if ((uVar5 & 1) != 0) {
        uVar3 = *(undefined4 *)((long)plVar7 + 0x24);
        *(int *)((long)plVar7 + 0x24) = (int)plVar7[5];
        *(undefined4 *)(plVar7 + 5) = uVar3;
        *(byte *)((long)plVar7 + 0x21) = *(byte *)((long)plVar7 + 0x21) ^ 1;
        (**(code **)(*plVar7 + 0x48))(plVar7);
        if ((long *)plVar7[10] != plVar7 + 9) {
          lVar6 = (long)*(int *)((long)plVar7 + 0x5c);
          plVar8 = (long *)(plVar7[10] - lVar6);
          do {
            (**(code **)(*plVar8 + 0x18))
                      (plVar8,(int)plVar7[5],*(undefined4 *)((long)plVar7 + 0x24));
            plVar8 = (long *)(*(long *)((long)plVar8 + lVar6 + 8) - lVar6);
          } while (plVar8 != (long *)((long)(plVar7 + 9) - lVar6));
        }
      }
      goto LAB_03d8345c;
    }
  }
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    *(byte *)((long)param_1 + 0x2c3) = *(byte *)((long)param_1 + 0x2c3) | 2;
  }
  puVar4 = (undefined8 *)param_1[0x4c];
  *(undefined4 *)(param_1 + 0x57) = param_2;
  *(undefined4 *)((long)param_1 + 700) = param_3;
  local_60 = (undefined *)CONCAT44(param_2,5);
  local_58 = (char *)CONCAT44(param_4,param_3);
  local_50 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,&local_60);
  }
  puVar4 = (undefined8 *)param_1[0x4d];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,&local_60);
  }
  lVar6 = param_1[0x54];
  if (lVar6 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    *(undefined4 *)(lVar6 + 0x40) = uVar3;
  }
  if (param_1[0x55] != 0) {
    *(int *)(param_1[0x55] + 0x40) = (int)param_1[0x57];
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_58 = "Decide";
  FUN_03d66950(param_1,&local_60,param_1[0x53]);
  if ((*(byte *)((long)param_1 + 0x2c3) & 1) == 0) {
    plVar7 = (long *)param_1[0x50];
    uVar3 = 6;
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      uVar3 = 7;
    }
    *(undefined4 *)((long)plVar7 + 0x2c) = uVar3;
    uVar5 = FUN_03c83810(plVar7);
    if ((uVar5 & 1) != 0) {
      uVar3 = *(undefined4 *)((long)plVar7 + 0x24);
      *(int *)((long)plVar7 + 0x24) = (int)plVar7[5];
      *(undefined4 *)(plVar7 + 5) = uVar3;
      *(byte *)((long)plVar7 + 0x21) = *(byte *)((long)plVar7 + 0x21) ^ 1;
      (**(code **)(*plVar7 + 0x48))(plVar7);
      if ((long *)plVar7[10] != plVar7 + 9) {
        lVar6 = (long)*(int *)((long)plVar7 + 0x5c);
        plVar8 = (long *)(plVar7[10] - lVar6);
        do {
          (**(code **)(*plVar8 + 0x18))(plVar8,(int)plVar7[5],*(undefined4 *)((long)plVar7 + 0x24));
          plVar8 = (long *)(*(long *)((long)plVar8 + lVar6 + 8) - lVar6);
        } while (plVar8 != (long *)((long)(plVar7 + 9) - lVar6));
      }
    }
  }
  else {
    plVar7 = (long *)param_1[0x50];
    if ((*(byte *)((long)param_1 + 0x2c2) >> 1 & 1) != 0) {
      *(undefined4 *)((long)plVar7 + 0x2c) = 5;
      do {
        if ((char)plVar7[4] == '\0') {
          FUN_03c83a50(plVar7,1);
        }
        FUN_03c835a0(plVar7);
      } while (*(int *)((long)plVar7 + 0x2c) != -0x80000000);
      plVar7 = (long *)param_1[0x50];
      *(undefined4 *)((long)plVar7 + 0x2c) = 7;
      uVar5 = FUN_03c83810(plVar7);
      if ((uVar5 & 1) != 0) {
        uVar3 = *(undefined4 *)((long)plVar7 + 0x24);
        *(int *)((long)plVar7 + 0x24) = (int)plVar7[5];
        *(undefined4 *)(plVar7 + 5) = uVar3;
        *(byte *)((long)plVar7 + 0x21) = *(byte *)((long)plVar7 + 0x21) ^ 1;
        (**(code **)(*plVar7 + 0x48))(plVar7);
        if ((long *)plVar7[10] != plVar7 + 9) {
          lVar6 = (long)*(int *)((long)plVar7 + 0x5c);
          plVar8 = (long *)(plVar7[10] - lVar6);
          do {
            (**(code **)(*plVar8 + 0x18))
                      (plVar8,(int)plVar7[5],*(undefined4 *)((long)plVar7 + 0x24));
            plVar8 = (long *)(*(long *)((long)plVar8 + lVar6 + 8) - lVar6);
          } while (plVar8 != (long *)((long)(plVar7 + 9) - lVar6));
        }
      }
      FUN_03c835a0(plVar7);
LAB_03d83530:
      *(byte *)((long)param_1 + 0x2c3) = *(byte *)((long)param_1 + 0x2c3) & 0xfe;
      *(byte *)((long)param_1 + 0x2c2) = *(byte *)((long)param_1 + 0x2c2) & 0xfd;
      return;
    }
    uVar3 = 2;
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      uVar3 = 3;
    }
    *(undefined4 *)((long)plVar7 + 0x2c) = uVar3;
    uVar5 = FUN_03c83810(plVar7);
    if ((uVar5 & 1) != 0) {
      uVar3 = *(undefined4 *)((long)plVar7 + 0x24);
      *(int *)((long)plVar7 + 0x24) = (int)plVar7[5];
      *(undefined4 *)(plVar7 + 5) = uVar3;
      *(byte *)((long)plVar7 + 0x21) = *(byte *)((long)plVar7 + 0x21) ^ 1;
      (**(code **)(*plVar7 + 0x48))(plVar7);
      if ((long *)plVar7[10] != plVar7 + 9) {
        lVar6 = (long)*(int *)((long)plVar7 + 0x5c);
        plVar8 = (long *)(plVar7[10] - lVar6);
        do {
          (**(code **)(*plVar8 + 0x18))(plVar8,(int)plVar7[5],*(undefined4 *)((long)plVar7 + 0x24));
          plVar8 = (long *)(*(long *)((long)plVar8 + lVar6 + 8) - lVar6);
        } while (plVar8 != (long *)((long)(plVar7 + 9) - lVar6));
      }
    }
  }
LAB_03d8345c:
  FUN_03c835a0(plVar7);
  return;
}

