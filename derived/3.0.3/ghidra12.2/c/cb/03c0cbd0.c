
undefined8 * FUN_03c0cbd0(long param_1,long *param_2,long *param_3,ulong param_4,undefined4 param_5)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
    uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x30))
                      (*(long **)(param_1 + 8),param_4,0xfffffffc);
    uVar5 = FUN_03c0c9c0(uVar4,uVar4,&local_60,param_2,param_3,param_4);
    if ((uVar5 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0x38))(*(long **)(param_1 + 8),uVar4);
      puVar7 = (undefined8 *)0x0;
    }
    else {
      local_68 = 0;
      local_6c = 0;
      FUN_03eba4f0(uVar4,param_4 & 0xffffffff,&local_68,&local_6c,*(undefined8 *)(param_1 + 8),
                   param_5,0x20,1);
      puVar7 = (undefined8 *)0x0;
      if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
        puVar7 = *(undefined8 **)(param_1 + 0x20);
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x20) = *puVar7;
        }
        *(undefined4 *)(puVar7 + 6) = 0x20;
        *(undefined1 *)((long)puVar7 + 0x34) = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar1 = PTR_DAT_04bb2028 + 0x10;
        *(undefined1 *)((long)puVar7 + 0x53) = 0;
        *(undefined1 *)((long)puVar7 + 0x6c) = 0;
        *(undefined4 *)(puVar7 + 0xd) = 0x20;
        *(undefined1 *)((long)puVar7 + 0x8b) = 0;
        *(undefined1 *)(puVar7 + 0x12) = 0;
        puVar7[4] = puVar1;
        puVar7[5] = (undefined1 *)((long)puVar7 + 0x34);
        puVar7[0xb] = puVar1;
        puVar7[0xc] = (undefined1 *)((long)puVar7 + 0x6c);
        if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
          *(undefined8 **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = puVar7;
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        }
      }
      pvVar8 = (void *)puVar7[5];
      *puVar7 = local_68;
      puVar7[1] = (ulong)local_6c;
      puVar7[2] = local_60;
      puVar7[3] = uStack_58;
      (**(code **)(*param_2 + 0x18))(param_2);
      pvVar9 = (void *)param_2[1];
      if (pvVar8 != pvVar9) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar6 = 0;
        do {
          if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_03c0cdb0;
          lVar2 = param_2[1] + lVar6;
          if (*(char *)(lVar2 + 1) == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_03c0cdb0;
          }
          if (*(char *)(lVar2 + 2) == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_03c0cdb0;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_03c0cdb0:
        iVar3 = (int)lVar6;
        if (*(int *)(puVar7 + 6) <= (int)lVar6) {
          iVar3 = *(int *)(puVar7 + 6) + -1;
        }
        memcpy(pvVar8,pvVar9,(long)iVar3);
        *(undefined1 *)((long)pvVar8 + (long)iVar3) = 0;
      }
      pvVar8 = (void *)puVar7[0xc];
      (**(code **)(*param_3 + 0x18))(param_3);
      pvVar9 = (void *)param_3[1];
      if (pvVar8 != pvVar9) {
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar6 = 0;
        do {
          if (*(char *)(param_3[1] + lVar6) == '\0') goto LAB_03c0ce4c;
          lVar2 = param_3[1] + lVar6;
          if (*(char *)(lVar2 + 1) == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_03c0ce4c;
          }
          if (*(char *)(lVar2 + 2) == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_03c0ce4c;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_03c0ce4c:
        iVar3 = (int)lVar6;
        if (*(int *)(puVar7 + 0xd) <= (int)lVar6) {
          iVar3 = *(int *)(puVar7 + 0xd) + -1;
        }
        memcpy(pvVar8,pvVar9,(long)iVar3);
        *(undefined1 *)((long)pvVar8 + (long)iVar3) = 0;
      }
      *(undefined1 *)(puVar7 + 0x12) = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x38))(*(long **)(param_1 + 8),uVar4);
    }
  }
  else {
    puVar7 = (undefined8 *)0x0;
  }
  return puVar7;
}

