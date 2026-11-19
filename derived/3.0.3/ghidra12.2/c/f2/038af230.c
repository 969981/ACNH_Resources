
void FUN_038af230(long param_1)

{
  bool bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  long *plVar8;
  ulong __size;
  long lVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  undefined *local_70;
  char *pcStack_68;
  
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "tmp_heap";
  plVar3 = (long *)FUN_038c6d48(0,&local_70,*(undefined8 *)(param_1 + 0x118),8,1,0);
  lVar11 = DAT_05ae7600;
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  lVar5 = *(long *)(lVar9 + 0x10);
  if (lVar5 == 0) goto LAB_038af4c8;
  __size = 0;
  iVar7 = 0;
  do {
    lVar5 = *(long *)(lVar5 + 0x10);
    iVar7 = iVar7 + 1;
    __size = (ulong)((int)__size + 8);
  } while (lVar5 != 0);
  if (DAT_05ae7600 == 0) {
    plVar4 = malloc(__size);
LAB_038af318:
    iVar10 = 0;
    if (plVar4 != (long *)0x0) {
      iVar10 = iVar7;
    }
    lVar11 = *(long *)(lVar9 + 0x10);
  }
  else {
    plVar4 = plVar3;
    if (plVar3 != (long *)0x0) {
LAB_038af2f8:
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
      goto LAB_038af318;
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar11 + 8);
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) goto LAB_038af2f8;
    iVar10 = 0;
    plVar4 = (long *)0x0;
    lVar11 = *(long *)(lVar9 + 0x10);
  }
  if (lVar11 != 0) {
    iVar7 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 != 0) {
        do {
          (**(code **)(*(long *)(lVar11 + 0x20) + 0x18))(lVar11 + 0x20);
          (**(code **)(*(long *)(lVar11 + 0x20) + 0x18))(lVar11 + 0x20);
          pbVar12 = *(byte **)(lVar11 + 0x28);
          (**(code **)(*(long *)(lVar5 + 0x20) + 0x18))((long *)(lVar5 + 0x20));
          if (pbVar12 == *(byte **)(lVar5 + 0x28)) {
LAB_038af3e0:
            if (*(int *)(lVar5 + 0x30) == 5) goto LAB_038af340;
            break;
          }
          pbVar12 = *(byte **)(lVar5 + 0x28);
          pbVar6 = *(byte **)(lVar11 + 0x28);
          lVar9 = 0x7ffff;
          while( true ) {
            bVar2 = *pbVar6;
            if (bVar2 != *pbVar12) break;
            if ((bVar2 == 0) ||
               (bVar1 = lVar9 == 0, pbVar12 = pbVar12 + 1, pbVar6 = pbVar6 + 1, lVar9 = lVar9 + -1,
               bVar1)) goto LAB_038af3e0;
          }
          lVar9 = 8;
          if (*pbVar12 <= bVar2) {
            lVar9 = 0x10;
          }
          lVar5 = *(long *)(lVar5 + lVar9);
        } while (lVar5 != 0);
      }
      if (iVar7 < iVar10) {
        plVar4[iVar7] = lVar11 + -8;
        iVar7 = iVar7 + 1;
      }
LAB_038af340:
      lVar11 = *(long *)(lVar11 + 0x10);
    } while (lVar11 != 0);
    if (iVar7 != 0) {
      lVar11 = (long)iVar7 << 3;
      do {
        lVar5 = *plVar4;
        plVar8 = (long *)(lVar5 + 8);
        lVar9 = *plVar8;
        if ((lVar9 == 0) || (*(long **)(lVar9 + 8) != plVar8)) {
          if (*(long *)(lVar5 + 0x20) != 0) {
            *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x10) = *(undefined8 *)(lVar5 + 0x18);
          }
          lVar9 = *(long *)(lVar5 + 0x18);
          if (lVar9 != 0) goto LAB_038af430;
          if (*plVar8 != 0) {
            *(undefined8 *)(*(long *)(*plVar8 + 8) + 0x18) = *(undefined8 *)(lVar5 + 0x20);
          }
        }
        else {
          *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(lVar5 + 0x18);
          lVar9 = *(long *)(lVar5 + 0x18);
          if (lVar9 != 0) {
LAB_038af430:
            *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar5 + 0x20);
            *(undefined8 *)(lVar5 + 0x18) = 0;
          }
        }
        *(undefined8 *)(lVar5 + 0x20) = 0;
        *(undefined8 *)(lVar5 + 8) = 0;
        FUN_038aae00(plVar8);
        *(undefined8 *)(lVar5 + 0x18) = 0;
        *(undefined8 *)(lVar5 + 0x20) = 0;
        *plVar8 = 0;
        *(undefined8 *)(lVar5 + 0x10) = 0;
        (**(code **)(*(long *)*plVar4 + 8))();
        lVar11 = lVar11 + -8;
        plVar4 = plVar4 + 1;
      } while (lVar11 != 0);
    }
  }
LAB_038af4c8:
  (**(code **)(*plVar3 + 0x20))(plVar3);
  return;
}

