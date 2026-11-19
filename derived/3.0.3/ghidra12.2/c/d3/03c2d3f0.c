
void * FUN_03c2d3f0(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,void *param_5,
                   uint param_6)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  void *__dest;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  uint local_9c;
  undefined *local_98;
  char *local_90;
  undefined4 local_88;
  char local_84 [31];
  undefined1 local_65;
  
  *(undefined1 *)(param_3 + 2) = 1;
  uVar11 = (ulong)param_6;
  plVar13 = *(long **)(param_2 + 0x130);
  param_3[6] = plVar13;
  puVar1 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar5 = malloc(0x1b8);
  }
  else {
    if (plVar13 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar6 = (undefined8 *)(lVar10 + 8);
      if (lVar4 != 0) {
        puVar6 = (undefined8 *)(lVar4 + 0xa8);
      }
      plVar13 = (long *)*puVar6;
    }
    pvVar5 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x1b8,8);
    plVar13 = (long *)param_3[6];
  }
  FUN_03c2d240(pvVar5,param_2,plVar13);
  plVar13 = param_3 + 4;
  (**(code **)(*plVar13 + 0x18))(plVar13);
  (**(code **)(*plVar13 + 0x18))(plVar13);
  pcVar9 = (char *)param_3[5];
  if (pcVar9 != "szs") {
    if (*pcVar9 == 's') {
      lVar10 = 0;
      do {
        if ((lVar10 == 0x80000) || (lVar4 = lVar10 + 1, pcVar9[lVar4] != (&DAT_040ad2e6)[lVar10]))
        goto LAB_03c2d52c;
        lVar10 = lVar10 + 1;
      } while (pcVar9[lVar4] != '\0');
    }
    else {
LAB_03c2d52c:
      (**(code **)(param_3[4] + 0x18))(plVar13);
      (**(code **)(param_3[4] + 0x18))(plVar13);
      pcVar9 = (char *)param_3[5];
      if (pcVar9 != "zs") {
        if (*pcVar9 == 'z') {
          uVar2 = 0;
          do {
            uVar8 = uVar2;
            if ((uVar8 == 0x80000) || (pcVar9[uVar8 + 1] != (&DAT_040a58fb)[uVar8]))
            goto LAB_03c2d678;
            uVar2 = uVar8 + 1;
          } while (pcVar9[uVar8 + 1] != '\0');
          if (uVar8 >> 0x13 == 0) goto LAB_03c2d5a0;
        }
LAB_03c2d678:
        local_65 = 0;
        iVar3 = *(int *)(param_2 + 0x120);
        local_88 = 0x20;
        local_84[0] = '\0';
        local_90 = local_84;
        local_98 = PTR_DAT_04bb2028 + 0x10;
        FUN_038b6c10(&local_98,param_4);
        (**(code **)(local_98 + 0x18))(&local_98);
        (**(code **)(local_98 + 0x18))(&local_98);
        if (local_90 == "sarc") {
LAB_03c2d724:
          iVar7 = 0x2000;
        }
        else {
          if (*local_90 == 's') {
            lVar10 = 0;
            iVar7 = -1;
            do {
              if ((lVar10 == 0x80000) ||
                 (lVar4 = lVar10 + 1, local_90[lVar4] != (&DAT_040ee614)[lVar10]))
              goto LAB_03c2d730;
              lVar10 = lVar10 + 1;
            } while (local_90[lVar4] != '\0');
            goto LAB_03c2d724;
          }
          iVar7 = -1;
        }
LAB_03c2d730:
        lVar10 = *(long *)puVar1;
        if (iVar3 <= iVar7) {
          iVar3 = iVar7;
        }
        iVar7 = *(int *)(param_2 + 0x124);
        uVar12 = (param_6 + iVar7) - 1 & -iVar7;
        if (iVar7 < 1) {
          uVar12 = param_6;
        }
        if (lVar10 == 0) {
          __dest = malloc((ulong)uVar12);
        }
        else {
          plVar13 = (long *)param_3[6];
          if (plVar13 == (long *)0x0) {
            lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar13 = (long *)(lVar10 + 8);
            if (lVar4 != 0) {
              plVar13 = (long *)(lVar4 + 0xa8);
            }
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) {
              __dest = (void *)0x0;
              goto LAB_03c2d7b4;
            }
          }
          __dest = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,(ulong)uVar12,iVar3);
        }
LAB_03c2d7b4:
        memcpy(__dest,param_5,uVar11);
        *param_3 = __dest;
        goto LAB_03c2d7c8;
      }
    }
  }
LAB_03c2d5a0:
  (**(code **)(param_3[4] + 0x18))(plVar13);
  (**(code **)(param_3[4] + 0x18))(plVar13);
  pcVar9 = (char *)param_3[5];
  if (pcVar9 == "zs") {
LAB_03c2d604:
    local_9c = 0;
    local_98 = (undefined *)0x0;
    FUN_03eba650(param_5,uVar11,&local_98,&local_9c,*(undefined8 *)(param_1 + 0x2448),param_3[6],
                 *(undefined4 *)(param_2 + 0x120),*(undefined4 *)(param_2 + 0x124),
                 *(undefined1 *)(param_2 + 0x138));
  }
  else {
    if (*pcVar9 == 'z') {
      lVar10 = 0;
      do {
        if ((lVar10 == 0x80000) || (lVar4 = lVar10 + 1, pcVar9[lVar4] != (&DAT_040a58fb)[lVar10]))
        goto LAB_03c2d63c;
        lVar10 = lVar10 + 1;
      } while (pcVar9[lVar4] != '\0');
      goto LAB_03c2d604;
    }
LAB_03c2d63c:
    local_9c = 0;
    local_98 = (undefined *)0x0;
    FUN_03eba4f0(param_5,uVar11,&local_98,&local_9c,param_3[6],*(undefined4 *)(param_2 + 0x120),
                 *(undefined4 *)(param_2 + 0x124),*(undefined1 *)(param_2 + 0x138));
  }
  *param_3 = local_98;
  uVar12 = local_9c;
LAB_03c2d7c8:
  *(uint *)(param_3 + 1) = uVar12;
  *(uint *)((long)param_3 + 0xc) = uVar12;
  puVar6 = (undefined8 *)FUN_038da2f0(*(undefined8 *)PTR_DAT_04bb28c8,param_3);
  if (((*PTR_DAT_04bb2828 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2828);
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uVar11 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bb2820);
    if ((uVar11 & 1) == 0) {
      puVar6 = (undefined8 *)0x0;
    }
  }
  *(undefined8 **)((long)pvVar5 + 0x48) = puVar6;
  lVar10 = *(long *)((long)pvVar5 + 0x40);
  puVar6 = (undefined8 *)((long)pvVar5 + 0x28);
  uVar12 = *(uint *)(param_2 + 0x14c);
  if (lVar10 != 0) {
    *(undefined8 *)((long)pvVar5 + 0x40) = 0;
    if (*(long *)((long)pvVar5 + 0x28) != 0) {
      *(undefined8 *)(*(long *)((long)pvVar5 + 0x28) + 8) = *(undefined8 *)((long)pvVar5 + 0x30);
    }
    if (*(undefined8 **)((long)pvVar5 + 0x30) != (undefined8 *)0x0) {
      **(undefined8 **)((long)pvVar5 + 0x30) = *puVar6;
    }
    *puVar6 = 0;
    *(undefined8 *)((long)pvVar5 + 0x30) = 0;
    *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
  }
  plVar13 = (long *)(param_1 + 0x348) + (ulong)uVar12 * 3;
  if (99 < uVar12) {
    plVar13 = (long *)(param_1 + 0x348);
  }
  *(long **)((long)pvVar5 + 0x40) = plVar13;
  lVar10 = *plVar13;
  *plVar13 = (long)puVar6;
  *(long *)((long)pvVar5 + 0x28) = lVar10;
  *(long **)((long)pvVar5 + 0x30) = plVar13;
  if (lVar10 != 0) {
    *(undefined8 **)(lVar10 + 8) = puVar6;
  }
  *(int *)(plVar13 + 2) = (int)plVar13[2] + 1;
  return pvVar5;
}

