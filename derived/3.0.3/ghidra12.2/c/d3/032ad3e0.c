
void FUN_032ad3e0(long *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = 0;
  do {
    if (param_2[lVar7] == 0) {
LAB_032ad430:
      uVar6 = (uint)lVar7;
joined_r0x032ad430:
      if (uVar6 != 0) {
        uVar2 = uVar6 & 3;
        if (uVar6 < 4) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar6 = uVar6 & 0xfffffffc;
          uVar5 = 0xffffffff;
          do {
            uVar6 = uVar6 - 4;
            uVar3 = crc32b(uVar5,(uint)*param_2,0x4c11db7);
            uVar3 = crc32b(uVar3,(uint)param_2[1],0x4c11db7);
            uVar3 = crc32b(uVar3,(uint)param_2[2],0x4c11db7);
            pbVar1 = param_2 + 3;
            param_2 = param_2 + 4;
            uVar5 = crc32b(uVar3,(uint)*pbVar1,0x4c11db7);
          } while (uVar6 != 0);
        }
        while (uVar2 != 0) {
          uVar2 = uVar2 - 1;
          uVar5 = crc32b(uVar5,(uint)*param_2,0x4c11db7);
          param_2 = param_2 + 1;
        }
        uVar5 = ~uVar5;
        lVar7 = *param_1;
        goto joined_r0x032ad51c;
      }
      break;
    }
    if (param_2[lVar7 + 1] == 0) {
      lVar7 = lVar7 + 1;
      goto LAB_032ad430;
    }
    if (param_2[lVar7 + 2] == 0) {
      uVar6 = (int)lVar7 + 2;
      goto joined_r0x032ad430;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  uVar5 = 0;
  lVar7 = *param_1;
joined_r0x032ad51c:
  if (lVar7 == 0) {
    if (*(int *)((long)param_1 + 0x1c) <= (int)param_1[3]) {
      return;
    }
  }
  else {
    lVar8 = lVar7;
    do {
      while (uVar5 < *(uint *)(lVar8 + 0x20)) {
        lVar8 = *(long *)(lVar8 + 8);
        if (lVar8 == 0) goto LAB_032ad48c;
      }
      if (uVar5 <= *(uint *)(lVar8 + 0x20)) {
        *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
        return;
      }
      lVar8 = *(long *)(lVar8 + 0x10);
    } while (lVar8 != 0);
LAB_032ad48c:
    if (*(int *)((long)param_1 + 0x1c) <= (int)param_1[3]) {
      do {
        while (uVar5 < *(uint *)(lVar7 + 0x20)) {
          lVar7 = *(long *)(lVar7 + 8);
          if (lVar7 == 0) {
            return;
          }
        }
        if (uVar5 <= *(uint *)(lVar7 + 0x20)) {
          *(undefined4 *)(lVar7 + 0x24) = 1;
          return;
        }
        lVar7 = *(long *)(lVar7 + 0x10);
      } while (lVar7 != 0);
      return;
    }
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    param_1[1] = *plVar4;
  }
  plVar4[5] = (long)param_1;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(uint *)(plVar4 + 4) = uVar5;
  *(undefined4 *)((long)plVar4 + 0x24) = 1;
  *plVar4 = (long)&PTR_LAB_04b19f30;
  plVar4[1] = 0;
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  lVar7 = FUN_032ad904(param_1,*param_1);
  *param_1 = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 1;
  return;
}

