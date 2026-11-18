
/* WARNING: Removing unreachable block (ram,0x032f8d90) */
/* WARNING: Removing unreachable block (ram,0x032f8a30) */
/* WARNING: Removing unreachable block (ram,0x032f8b74) */
/* WARNING: Removing unreachable block (ram,0x032f8bf8) */
/* WARNING: Removing unreachable block (ram,0x032f88b4) */
/* WARNING: Removing unreachable block (ram,0x032f88d4) */
/* WARNING: Removing unreachable block (ram,0x032f8c18) */
/* WARNING: Removing unreachable block (ram,0x032f8b94) */
/* WARNING: Removing unreachable block (ram,0x032f8a58) */
/* WARNING: Removing unreachable block (ram,0x032f8db0) */

int FUN_032f8738(long param_1,long param_2,long param_3,int param_4,char *param_5,long param_6,
                undefined2 param_7,undefined2 param_8,undefined2 param_9,undefined2 param_10,
                undefined2 param_11,undefined2 param_12,byte param_13)

{
  FileHandle *pFVar1;
  undefined8 *puVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  void *pvVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  
  if (param_5 == (char *)0x0) {
    return 0xffff;
  }
  lVar14 = *(long *)PTR_DAT_04bc1118;
  if (*(char *)(*(long *)(lVar14 + 0x20) + 0x16408) != '\0') {
    return 0;
  }
  switch(param_4) {
  case 2:
  case 5:
    plVar11 = (long *)(param_1 + 0x18);
    *plVar11 = 0;
    plVar12 = (long *)(param_1 + 0x20);
    *plVar12 = 0;
    lVar10 = *(long *)(lVar14 + 0x20);
    if (lVar10 == 0) {
LAB_032f898c:
      pvVar8 = (void *)FUN_032f9a60(0xa460);
      *plVar11 = (long)pvVar8;
      memcpy(pvVar8,(void *)(*(long *)(lVar14 + 0x20) + 0x1b20),0xa460);
    }
    else {
      if ((*(long *)(lVar10 + 0x6e0) == 0) ||
         (plVar6 = *(long **)(*(long *)(lVar10 + 0x6e0) + 8), plVar6 == (long *)0x0)) {
LAB_032f8828:
        if ((*(long *)(lVar10 + 0x6e0) != 0) &&
           (plVar6 = *(long **)(*(long *)(lVar10 + 0x6e0) + 8), plVar6 != (long *)0x0)) {
          uVar7 = (**(code **)(*plVar6 + 0xf0))();
          if ((uVar7 & 1) != 0) goto LAB_032f889c;
          lVar10 = *(long *)(lVar14 + 0x20);
          if (lVar10 == 0) goto LAB_032f898c;
        }
        if (((*(long *)(lVar10 + 0x6e0) == 0) ||
            (plVar6 = *(long **)(*(long *)(lVar10 + 0x6e0) + 8), plVar6 == (long *)0x0)) ||
           ((uVar7 = (**(code **)(*plVar6 + 0xd8))(plVar6), (uVar7 & 1) == 0 &&
            ((uVar7 = (**(code **)(*plVar6 + 0xd0))(plVar6), (uVar7 & 1) == 0 &&
             (uVar7 = (**(code **)(*plVar6 + 0xe0))(plVar6), (uVar7 & 1) == 0))))))
        goto LAB_032f898c;
      }
      else {
        uVar7 = (**(code **)(*plVar6 + 0xe8))();
        if ((uVar7 & 1) == 0) {
          lVar10 = *(long *)(lVar14 + 0x20);
          if (lVar10 == 0) goto LAB_032f898c;
          goto LAB_032f8828;
        }
      }
LAB_032f889c:
      if (*DAT_05730eb0 == 0) {
        pvVar8 = (void *)0x0;
      }
      else {
        pvVar8 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))
                                   ((long *)*DAT_05730eb0,0xa460,8);
        if (pvVar8 != (void *)0x0) {
          memset(pvVar8,0,0xa460);
        }
      }
      *plVar12 = (long)pvVar8;
      memcpy(pvVar8,(void *)(*(long *)(lVar14 + 0x20) + 0xbf80),0xa460);
      plVar11 = plVar12;
    }
    lVar10 = *plVar11;
    lVar14 = param_3 + 0xbe8;
    uVar7 = (ulong)param_13;
    plVar11 = (long *)(lVar14 + uVar7 * 0x50);
    param_2 = param_2 + 8;
    *plVar11 = lVar10;
    uVar5 = FUN_00100830(lVar10,param_2,0,1,0xa460);
    if (((uVar5 >> 0xf & 1) == 0) ||
       (uVar5 = FUN_00100860(*plVar11,param_2,2,0xa460), (uVar5 >> 0xf & 1) == 0)) {
      if (*plVar11 == 0) goto LAB_032f8bdc;
    }
    else {
      *plVar11 = 0;
LAB_032f8bdc:
      if ((*DAT_05730eb0 == 0) ||
         (pvVar8 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))
                                     ((long *)*DAT_05730eb0,0xa460,8), pvVar8 == (void *)0x0)) {
        *plVar11 = 0;
        return 0xffff;
      }
      memset(pvVar8,0,0xa460);
      *plVar11 = (long)pvVar8;
      uVar9 = 4;
      if (param_4 != 5) {
        uVar9 = 2;
      }
      uVar5 = FUN_00100860(pvVar8,param_2,uVar9,0xa460);
      if ((uVar5 >> 0xf & 1) != 0) {
        return (int)(short)uVar5;
      }
    }
    *(ushort *)(param_3 + 0x8b3a) = (ushort)param_13;
    *(undefined4 *)(param_3 + 0x8b44) = 0xa460;
    lVar10 = lVar14 + uVar7 * 0x50;
    *(undefined2 *)(lVar10 + 0x48) = 0;
    *(undefined8 *)(lVar10 + 8) = 0;
    *(undefined8 *)(lVar10 + 0x10) = 0;
    *(undefined8 *)(lVar10 + 0x28) = 0;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = 0;
    *(undefined2 *)(lVar10 + 0x30) = param_7;
    *(undefined2 *)(lVar10 + 0x32) = param_8;
    *(undefined2 *)(lVar10 + 0x34) = param_9;
    *(undefined2 *)(lVar10 + 0x36) = param_10;
    *(undefined2 *)(lVar10 + 0x38) = param_11;
    *(undefined2 *)(lVar10 + 0x3a) = param_12;
    if (*DAT_05730eb0 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))((long *)*DAT_05730eb0,0x2058,8);
      if (pvVar8 != (void *)0x0) {
        memset(pvVar8,0,0x2058);
      }
    }
    lVar14 = lVar14 + uVar7 * 0x50;
    goto LAB_032f8df0;
  default:
    lVar14 = param_3 + 0xbe8 + (ulong)param_13 * 0x50;
    FUN_032f8e14(param_5,lVar14);
    *(undefined2 *)(lVar14 + 0x48) = 0;
    *(undefined8 *)(lVar14 + 0x18) = 0;
    *(undefined8 *)(lVar14 + 8) = 0;
    *(undefined8 *)(lVar14 + 0x10) = 0;
    if ((param_6 == 0) || (iVar4 = FUN_032f8e14(param_6,(undefined8 *)(lVar14 + 0x20)), iVar4 < 0))
    {
      *(undefined8 *)(lVar14 + 0x20) = 0;
    }
    lVar14 = param_3 + 0xbe8 + (ulong)param_13 * 0x50;
    *(undefined2 *)(lVar14 + 0x36) = param_10;
    *(undefined8 *)(lVar14 + 0x28) = 0;
    *(undefined2 *)(lVar14 + 0x30) = param_7;
    *(undefined2 *)(lVar14 + 0x32) = param_8;
    *(undefined2 *)(lVar14 + 0x34) = param_9;
    *(undefined2 *)(lVar14 + 0x3a) = param_12;
    *(undefined2 *)(lVar14 + 0x38) = param_11;
    break;
  case 4:
    lVar14 = param_3 + (ulong)param_13 * 0x10;
    uVar7 = (ulong)param_13;
    pFVar1 = (FileHandle *)(param_3 + (ulong)param_13 * 8 + 0xb48);
    puVar2 = (undefined8 *)(lVar14 + 0xa08);
    *(undefined4 *)(lVar14 + 0xa10) = 0;
    *(FileHandle **)(lVar14 + 0xa08) = pFVar1;
    iVar4 = nn::fs::OpenFile(pFVar1,param_5,1);
    if (iVar4 == 0) {
      uVar5 = thunk_FUN_0010cea0(param_2 + 8,puVar2,7);
      if ((uVar5 == 0) || (*DAT_05730eb0 == 0)) {
        pvVar8 = (void *)0x0;
      }
      else {
        pvVar8 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))
                                   ((long *)*DAT_05730eb0,(ulong)uVar5,8);
        if (pvVar8 != (void *)0x0) {
          memset(pvVar8,0,(ulong)uVar5);
        }
      }
      lVar14 = param_3 + uVar7 * 0x80 + 8;
      iVar4 = FUN_00100900(lVar14,param_2 + 8,puVar2,pvVar8,uVar5,7);
      plVar11 = (long *)(param_3 + 0xbe8 + uVar7 * 0x50);
      if (iVar4 < 0) {
        *plVar11 = 0;
      }
      else {
        *plVar11 = lVar14;
        *(undefined1 *)(param_3 + 0xbe8 + uVar7 * 0x50 + 0x48) = 3;
      }
    }
    else {
      *(undefined8 *)(param_3 + uVar7 * 0x50 + 0xbe8) = 0;
    }
    nn::fs::CloseFile(*(undefined8 *)*puVar2);
    lVar14 = param_3 + 0xbe8;
    puVar13 = (undefined8 *)(lVar14 + uVar7 * 0x50);
    puVar2 = puVar13 + 4;
    puVar13[2] = 0;
    puVar13[3] = 0;
    puVar13[1] = 0;
    *(undefined1 *)((long)puVar13 + 0x49) = 0;
    if ((param_6 == 0) || (iVar4 = FUN_032f8e14(param_6,puVar2), iVar4 < 0)) {
LAB_032f8d4c:
      *puVar2 = 0;
    }
    else {
      sVar3 = thunk_FUN_0010cdb0(param_2 + 8,*(undefined1 *)(lVar14 + uVar7 * 0x50 + 0x48),*puVar13,
                                 *puVar2,iVar4);
      if (sVar3 != 1) {
        FUN_032f9b00(*puVar2);
        goto LAB_032f8d4c;
      }
    }
    lVar14 = lVar14 + uVar7 * 0x50;
    *(undefined2 *)(lVar14 + 0x34) = param_9;
    *(undefined8 *)(lVar14 + 0x28) = 0;
    *(undefined2 *)(lVar14 + 0x30) = param_7;
    *(undefined2 *)(lVar14 + 0x32) = param_8;
    *(undefined2 *)(lVar14 + 0x3a) = param_12;
    *(undefined2 *)(lVar14 + 0x36) = param_10;
    *(undefined2 *)(lVar14 + 0x38) = param_11;
  }
  if (*DAT_05730eb0 == 0) {
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))((long *)*DAT_05730eb0,0x2058,8);
    if (pvVar8 != (void *)0x0) {
      memset(pvVar8,0,0x2058);
    }
  }
  lVar14 = param_3 + 0xbe8 + (ulong)param_13 * 0x50;
LAB_032f8df0:
  *(void **)(lVar14 + 0x40) = pvVar8;
  return 0;
}

