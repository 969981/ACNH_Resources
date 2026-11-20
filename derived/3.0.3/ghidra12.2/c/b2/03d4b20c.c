
void FUN_03d4b20c(long param_1,long param_2,undefined4 *param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  uint *puVar7;
  long local_50;
  long *local_48;
  long local_40;
  uint local_34;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_2 + 8) <= uVar2) {
    uVar2 = 0;
  }
  puVar7 = (uint *)(*(long *)(param_2 + 0x10) + (long)(int)uVar2 * 0x48);
  local_50 = param_1;
  local_40 = param_2;
  if (((puVar7[0xf] >> (ulong)(*(uint *)(param_1 + 0x14) & 0x1f) & 1) == 0) &&
     (*(char *)(param_1 + 0xbc) != '\0')) {
    if ((param_4 & 1) != 0) goto LAB_03d4b4c4;
    iVar4 = *(int *)(param_1 + 0xb8);
    if ((*puVar7 & 1 << (ulong)(*(uint *)(param_1 + 0x14) & 0x1f)) != 0) {
      if (0 < iVar4) {
        *(int *)(param_1 + 0xb8) = iVar4 + -1;
        if (iVar4 + -1 == 0) {
          local_34 = 3;
          local_48 = &local_40;
          (**(code **)(*DAT_05af83f8 + 0x48))();
          puVar1 = (undefined8 *)(param_1 + 0x18) + (ulong)local_34 * 4;
          if (4 < local_34) {
            puVar1 = (undefined8 *)(param_1 + 0x18);
          }
          (**(code **)*puVar1)(puVar1,(ulong)local_34,&local_50);
          *(undefined4 *)(param_1 + 0xb8) = param_3[1];
        }
        local_34 = 4;
        local_48 = &local_40;
        local_50 = param_1;
        local_40 = param_2;
        (**(code **)(*DAT_05af83f8 + 0x48))();
        puVar1 = (undefined8 *)(param_1 + 0x18) + (ulong)local_34 * 4;
        if (4 < local_34) {
          puVar1 = (undefined8 *)(param_1 + 0x18);
        }
        (**(code **)*puVar1)(puVar1,(ulong)local_34,&local_50);
        goto LAB_03d4b4c4;
      }
      if (iVar4 != -3) {
        if (iVar4 == -1) {
          FUN_03d4b514(param_1,0,param_2);
          FUN_03d4b514(param_1,3,param_2);
          *(undefined4 *)(param_1 + 0xb8) = *param_3;
          FUN_03d4b514(param_1,4,param_2);
          if ((*(char *)(param_1 + 0xbd) != '\0') && (*(char *)(param_1 + 0xbe) != '\0')) {
            uVar2 = *(uint *)(param_1 + 0x10);
            if (*(uint *)(param_2 + 8) <= uVar2) {
              uVar2 = 0;
            }
            *(undefined4 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar2 * 0x48 + 0x3c) = 0xffffffff
            ;
          }
        }
        goto LAB_03d4b4c4;
      }
      goto LAB_03d4b364;
    }
    if (iVar4 < 0) {
      if (iVar4 == -3) {
        FUN_03d4b514(param_1,1,param_2);
      }
    }
    else {
      local_34 = 1;
      local_48 = &local_40;
      (**(code **)(*DAT_05af83f8 + 0x48))();
      puVar1 = (undefined8 *)(param_1 + 0x18) + (ulong)local_34 * 4;
      if (4 < local_34) {
        puVar1 = (undefined8 *)(param_1 + 0x18);
      }
      (**(code **)*puVar1)(puVar1,(ulong)local_34,&local_50);
    }
    uVar5 = 0xffffffff;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xb8);
    if (iVar4 < 0) {
      if (iVar4 == -1) {
        uVar5 = 0xfffffffe;
        goto LAB_03d4b4c0;
      }
    }
    else {
      iVar4 = -3;
      *(undefined4 *)(param_1 + 0xb8) = 0xfffffffd;
    }
    if ((iVar4 != -3) || ((param_4 & 1) != 0)) goto LAB_03d4b4c4;
LAB_03d4b364:
    local_34 = 2;
    local_48 = &local_40;
    uVar3 = (**(code **)(*DAT_05af83f8 + 0x48))();
    if ((uVar3 & 1) == 0) {
      local_34 = 1;
    }
    puVar1 = (undefined8 *)(param_1 + 0x18) + (ulong)local_34 * 4;
    if (4 < local_34) {
      puVar1 = (undefined8 *)(param_1 + 0x18);
    }
    (**(code **)*puVar1)(puVar1,(ulong)local_34,&local_50);
    uVar5 = 0xfffffffe;
  }
LAB_03d4b4c0:
  *(undefined4 *)(param_1 + 0xb8) = uVar5;
LAB_03d4b4c4:
  if (*(char *)(param_1 + 0xbd) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x10);
    if (*(uint *)(param_2 + 8) <= uVar2) {
      uVar2 = 0;
    }
    lVar6 = *(long *)(param_2 + 0x10) + (long)(int)uVar2 * 0x48;
    *(uint *)(lVar6 + 0x3c) =
         *(uint *)(lVar6 + 0x3c) | 1 << (ulong)(*(uint *)(param_1 + 0x14) & 0x1f);
  }
  return;
}

