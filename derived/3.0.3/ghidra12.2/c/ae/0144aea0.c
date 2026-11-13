
void FUN_0144aea0(long param_1,uint param_2,undefined4 param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 *__dest;
  undefined *local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_9c [7];
  undefined1 local_5d;
  int local_58;
  uint local_54;
  
  local_58 = param_4;
  local_54 = param_2;
  if (param_4 == -1) {
    local_5d = 0;
    local_a0 = 0x40;
    local_b0 = PTR_DAT_04bb2f70 + 0x10;
    local_a8 = local_9c;
    (**(code **)(DAT_051c61d8 + 0x18))(&DAT_051c61d8);
    puVar5 = DAT_051c61e0;
    if (local_9c != DAT_051c61e0) {
      (**(code **)(DAT_051c61d8 + 0x18))(&DAT_051c61d8);
      lVar8 = 0;
      do {
        if (*(char *)((long)DAT_051c61e0 + lVar8) == '\0') goto LAB_0144b034;
        if (*(char *)((long)DAT_051c61e0 + lVar8 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_0144b034;
        }
        if (*(char *)((long)DAT_051c61e0 + lVar8 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_0144b034;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_0144b034:
      iVar7 = (int)lVar8;
      if (local_a0 <= (int)lVar8) {
        iVar7 = local_a0 + -1;
      }
      memcpy(local_9c,puVar5,(long)iVar7);
      *(undefined1 *)((long)local_9c + (long)iVar7) = 0;
    }
    local_b0 = PTR_DAT_04bb2bc0 + 0x10;
    FUN_038d13f0(&local_b0,&DAT_040d486c,param_3);
    puVar5 = local_a8;
    uVar6 = local_54;
    if (3 < local_54) {
      uVar6 = 0;
    }
    plVar1 = &DAT_051c61e8 + (long)(int)uVar6 * 2;
    (**(code **)(local_b0 + 0x18))(&local_b0);
    lVar8 = 0;
    do {
      if (*(char *)((long)local_a8 + lVar8) == '\0') goto LAB_0144b0f0;
      if (*(char *)((long)local_a8 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0144b0f0;
      }
      if (*(char *)((long)local_a8 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0144b0f0;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0144b0f0:
    uVar3 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar8 = 0;
    lVar10 = (&DAT_051c61f0)[(long)(int)uVar6 * 2];
    do {
      if (*(char *)(lVar10 + lVar8) == '\0') goto LAB_0144b14c;
      lVar2 = lVar10 + lVar8;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0144b14c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0144b14c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0144b14c:
    uVar4 = (uint)lVar8;
    if ((int)(local_a0 - uVar3) <= (int)(uint)lVar8) {
      uVar4 = local_a0 + ~uVar3;
    }
    if (0 < (int)uVar4) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      memcpy((void *)((long)puVar5 + (ulong)uVar3),(void *)(&DAT_051c61f0)[(long)(int)uVar6 * 2],
             (ulong)uVar4);
      *(undefined1 *)((long)puVar5 + (long)(int)(uVar4 + uVar3)) = 0;
    }
    __dest = *(undefined8 **)(param_1 + 8);
    (**(code **)(local_b0 + 0x18))(&local_b0);
    puVar5 = local_a8;
    if (__dest == local_a8) {
      return;
    }
    (**(code **)(local_b0 + 0x18))(&local_b0);
    lVar8 = 0;
    do {
      if (*(char *)((long)local_a8 + lVar8) == '\0') goto LAB_0144b20c;
      if (*(char *)((long)local_a8 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0144b20c;
      }
      if (*(char *)((long)local_a8 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0144b20c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0144b20c:
    iVar7 = (int)lVar8;
    iVar9 = *(int *)(param_1 + 0x10);
  }
  else {
    if (param_4 - 1U < 6) {
      uVar6 = *(uint *)(&DAT_041755cc + (long)(int)(param_4 - 1U) * 4);
    }
    else {
      uVar6 = 0;
    }
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar6);
    if (uVar6 < 4) {
      puVar5 = (undefined8 *)(&PTR_s_OnCrash_0499f9a8)[uVar6];
    }
    else {
      puVar5 = &DAT_0407ebb1;
    }
    __dest = *(undefined8 **)(param_1 + 8);
    if (__dest == puVar5) {
      return;
    }
    lVar8 = 0;
    do {
      if (*(char *)((long)puVar5 + lVar8) == '\0') goto LAB_0144b01c;
      if (*(char *)((long)puVar5 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0144b01c;
      }
      if (*(char *)((long)puVar5 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0144b01c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0144b01c:
    iVar7 = (int)lVar8;
    iVar9 = *(int *)(param_1 + 0x10);
  }
  if (iVar9 <= iVar7) {
    iVar7 = iVar9 + -1;
  }
  memcpy(__dest,puVar5,(long)iVar7);
  *(undefined1 *)((long)__dest + (long)iVar7) = 0;
  return;
}

