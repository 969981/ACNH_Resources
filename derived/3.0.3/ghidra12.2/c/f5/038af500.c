
void FUN_038af500(long *param_1,long *param_2,undefined4 *param_3)

{
  long *__dest;
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  long *__src;
  byte *pbVar11;
  
  if ((int)param_1[3] < *(int *)((long)param_1 + 0x1c)) {
    plVar10 = (long *)param_1[1];
    if (plVar10 != (long *)0x0) {
      param_1[1] = *plVar10;
    }
    puVar5 = PTR_DAT_04bb2120;
    puVar4 = PTR_DAT_04bb2020;
    plVar10[2] = 0;
    plVar10[3] = 0;
    plVar10[4] = (long)(puVar4 + 0x10);
    plVar10[5] = (long)puVar5;
    *plVar10 = (long)&PTR_LAB_04b62a08;
    plVar10[1] = 0;
    uVar2 = *param_3;
    plVar10[7] = (long)param_1;
    *(undefined1 *)(plVar10 + 0x10) = 0;
    __dest = plVar10 + 8;
    *(undefined4 *)(plVar10 + 6) = uVar2;
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (long *)param_2[1];
    if (__dest != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar7 = 0;
      do {
        if (*(char *)(param_2[1] + lVar7) == '\0') {
LAB_038af694:
          iVar6 = (int)lVar7;
joined_r0x038af698:
          if (0x40 < iVar6) {
            iVar6 = 0x40;
          }
          goto LAB_038af6a0;
        }
        lVar9 = param_2[1] + lVar7;
        if (*(char *)(lVar9 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_038af694;
        }
        if (*(char *)(lVar9 + 2) == '\0') {
          iVar6 = (int)lVar7 + 2;
          goto joined_r0x038af698;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      iVar6 = 0;
LAB_038af6a0:
      memcpy(__dest,__src,(long)iVar6);
      *(undefined1 *)((long)__dest + (long)iVar6) = 0;
    }
    plVar10[5] = (long)__dest;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    lVar7 = FUN_038b0320(param_1,*param_1,plVar10);
    *param_1 = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 1;
  }
  else {
    for (lVar7 = *param_1; lVar7 != 0; lVar7 = *(long *)(lVar7 + lVar9)) {
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      pbVar11 = (byte *)param_2[1];
      (**(code **)(*(long *)(lVar7 + 0x20) + 0x18))((long *)(lVar7 + 0x20));
      if (pbVar11 == *(byte **)(lVar7 + 0x28)) {
LAB_038af684:
        *(undefined4 *)(lVar7 + 0x30) = *param_3;
        return;
      }
      pbVar11 = *(byte **)(lVar7 + 0x28);
      pbVar8 = (byte *)param_2[1];
      lVar9 = 0x7ffff;
      while( true ) {
        bVar3 = *pbVar8;
        if (bVar3 != *pbVar11) break;
        if ((bVar3 == 0) ||
           (bVar1 = lVar9 == 0, pbVar11 = pbVar11 + 1, pbVar8 = pbVar8 + 1, lVar9 = lVar9 + -1,
           bVar1)) goto LAB_038af684;
      }
      lVar9 = 8;
      if (*pbVar11 <= bVar3) {
        lVar9 = 0x10;
      }
    }
  }
  return;
}

