
void FUN_03ec62d0(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  size_t __size;
  uint uVar3;
  long *plVar4;
  long lVar5;
  void *__s;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  short *psVar10;
  int *piVar11;
  undefined *local_168;
  char *pcStack_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  *(long *)(param_1 + 0x28) = param_2[2];
  uVar3 = *(uint *)(param_2 + 3);
  if (*(int *)(*(long *)(*(long *)(param_2[2] + 0x10) + 8) + 0x18) <= (int)uVar3) {
    return;
  }
  piVar11 = *(int **)(*(long *)(param_2[2] + 0x10) + 0x30);
  if (0 < (int)uVar3) {
    uVar2 = uVar3 & 3;
    if (3 < uVar3) {
      uVar3 = uVar3 & 0xfffffffc;
      do {
        uVar3 = uVar3 - 4;
        piVar11 = piVar11 + (long)*piVar11 * 2 + 3;
        piVar11 = piVar11 + (long)*piVar11 * 2 + 3;
        piVar11 = piVar11 + (long)*piVar11 * 2 + 3 + (long)piVar11[(long)*piVar11 * 2 + 3] * 2 + 3;
      } while (uVar3 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      piVar11 = piVar11 + (long)*piVar11 * 2 + 3;
    }
  }
  if (*piVar11 < 1) goto LAB_03ec655c;
  uVar3 = (**(code **)(*(long *)param_2[1] + 0x58))();
  if (0 < (int)uVar3) {
    __size = (ulong)uVar3 << 7;
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
      __s = malloc(__size);
    }
    else {
      plVar4 = (long *)*param_2;
      if (plVar4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar4 = (long *)(lVar9 + 8);
        if (lVar5 != 0) {
          plVar4 = (long *)(lVar5 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_03ec641c;
      }
      __s = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
    }
    if (__s != (void *)0x0) {
      memset(__s,0,__size);
      *(uint *)(param_1 + 8) = uVar3;
      *(void **)(param_1 + 0x10) = __s;
    }
  }
LAB_03ec641c:
  puVar6 = (undefined8 *)(**(code **)(*(long *)param_2[1] + 0xc0))((long *)param_2[1],*param_2);
  *(undefined8 **)(param_1 + 0x18) = puVar6;
  (**(code **)*puVar6)(puVar6,*piVar11 << 1,*param_2);
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    uVar3 = *(uint *)(param_2 + 3);
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    piVar8 = *(int **)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 0x30);
    if (0 < (int)uVar3) {
      uVar2 = uVar3 & 3;
      if (3 < uVar3) {
        uVar3 = uVar3 & 0xfffffffc;
        do {
          uVar3 = uVar3 - 4;
          piVar8 = piVar8 + (long)*piVar8 * 2 + 3;
          piVar8 = piVar8 + (long)*piVar8 * 2 + 3;
          piVar8 = piVar8 + (long)*piVar8 * 2 + 3 + (long)piVar8[(long)*piVar8 * 2 + 3] * 2 + 3;
        } while (uVar3 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        piVar8 = piVar8 + (long)*piVar8 * 2 + 3;
      }
    }
    if (0 < *piVar8) {
      lVar9 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      psVar10 = (short *)((long)piVar8 + 0x12);
      do {
        lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 8);
        pcStack_160 = (char *)(lVar5 + *(int *)(psVar10 + -3) + (long)*(int *)(lVar5 + 0x24));
        local_168 = puVar1;
        (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                  (*(long **)(param_1 + 0x18),&local_168,psVar10[-1],*psVar10 != 0);
        lVar9 = lVar9 + 1;
        psVar10 = psVar10 + 4;
      } while (lVar9 < *piVar8);
    }
    plVar4 = *(long **)(param_1 + 0x18);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,param_1 + 8);
    }
  }
LAB_03ec655c:
  lVar9 = *(long *)(*(long *)(param_2[2] + 0x10) + 8);
  pcStack_160 = (char *)(lVar9 + piVar11[2] + (long)*(int *)(lVar9 + 0x24));
  if (*pcStack_160 != '\0') {
    local_168 = PTR_DAT_04bb2020 + 0x10;
    uVar7 = (**(code **)(*(long *)param_2[1] + 0x68))
                      ((long *)param_2[1],&local_168,param_1 + 0x20,param_1 + 0x22);
    if ((uVar7 & 1) == 0) {
      local_55 = 0;
      pcStack_160 = local_154;
      local_158 = 0x100;
      local_154[0] = 0;
      local_168 = PTR_DAT_04bb21f8 + 0x10;
      lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 8);
      FUN_038d1270(&local_168,"%s.as",lVar9 + *(int *)(lVar9 + 0x24) + (long)*(int *)(lVar9 + 8));
    }
  }
  return;
}

