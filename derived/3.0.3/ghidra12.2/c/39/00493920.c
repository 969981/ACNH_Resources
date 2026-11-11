
void FUN_00493920(long param_1,undefined8 param_2,ulong *param_3)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  int iVar11;
  void *pvVar12;
  int *piVar13;
  long lVar14;
  undefined4 local_78 [4];
  long local_68;
  
  if (((*(int *)(param_1 + 0xf8) <= *(int *)(param_1 + 0x100)) &&
      (*(int *)(param_1 + 0x128) <= *(int *)(param_1 + 0x140))) &&
     (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x40))) {
    return;
  }
  FUN_0049f670(param_2,0,0x54595045);
  if (*(char *)(param_1 + 0x290) != '\0') {
    FUN_0049f670(param_2,1,0x54505452);
    FUN_00446210(param_3,((long)*(int *)(param_1 + 0x210) + 1) * (long)*(int *)(param_1 + 0x220));
    FUN_0049f780(param_2);
  }
  if (*(char *)(param_1 + 0x291) == '\0') {
    *(undefined4 *)(param_1 + 0x36c) = 1;
    if (*(int *)(param_1 + 0x68) < *(int *)(param_1 + 0x50)) goto LAB_00493af0;
  }
  else {
    if (((*(int *)(param_1 + 0x108) == *(int *)(param_1 + 0x38)) &&
        (*(int *)(param_1 + 0x10c) == *(int *)(param_1 + 0x50))) &&
       (*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0xf8))) {
      uVar4 = (undefined4)*(undefined8 *)(param_1 + 0x118);
    }
    else {
      uVar4 = FUN_0049ae80(param_1 + 0x18);
    }
    FUN_0049f670(param_2,1,0x54534841);
    local_78[0] = *(undefined4 *)(param_1 + 0x36c);
    pvVar12 = (void *)((long)*param_3 + 4);
    if ((void *)param_3[1] < pvVar12) {
      FUN_004462a0(param_3,local_78,4);
      pvVar12 = (void *)*param_3;
    }
    else {
      memcpy((void *)*param_3,local_78,4);
      *param_3 = (ulong)pvVar12;
    }
    local_78[0] = uVar4;
    if (param_3[1] < (long)pvVar12 + 4U) {
      FUN_004462a0(param_3,local_78,4);
    }
    else {
      memcpy(pvVar12,local_78,4);
      *param_3 = (long)pvVar12 + 4U;
    }
    FUN_0049f780(param_2);
    *(undefined4 *)(param_1 + 0x36c) = uVar4;
    if (*(int *)(param_1 + 0x68) < *(int *)(param_1 + 0x50)) {
LAB_00493af0:
      FUN_0049f670(param_2,1,0x54535431);
      iVar5 = *(int *)(param_1 + 0x50);
      iVar11 = *(int *)(param_1 + 0x68);
      if (iVar11 != iVar5) {
        lVar9 = (long)iVar5 * 8 + (long)iVar11 * -8;
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar11 * 8);
        do {
          while( true ) {
            pvVar12 = (void *)*puVar6;
            iVar5 = FUN_0043a2d0(pvVar12);
            uVar2 = (long)*param_3 + (long)(iVar5 + 1);
            if (uVar2 <= param_3[1]) break;
            FUN_004462a0(param_3,pvVar12);
            puVar6 = puVar6 + 1;
            lVar9 = lVar9 + -8;
            if (lVar9 == 0) goto LAB_00493b80;
          }
          memcpy((void *)*param_3,pvVar12,(long)(iVar5 + 1));
          *param_3 = uVar2;
          puVar6 = puVar6 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
LAB_00493b80:
        iVar5 = *(int *)(param_1 + 0x50);
      }
      *(int *)(param_1 + 0x68) = iVar5;
      pvVar12 = (void *)*param_3;
      uVar3 = ((int)pvVar12 - (int)param_3[2]) + (int)param_3[4] & 3;
      if ((uVar3 != 0) && (iVar5 = 4 - uVar3, iVar5 != 0)) {
        while( true ) {
          iVar11 = iVar5;
          if (0x1f < iVar5) {
            iVar11 = 0x20;
          }
          sVar10 = (size_t)iVar11;
          if (param_3[1] < sVar10 + (long)pvVar12) {
            FUN_004462a0(param_3,&DAT_04141588,sVar10);
          }
          else {
            memcpy(pvVar12,&DAT_04141588,sVar10);
            *param_3 = sVar10 + (long)pvVar12;
          }
          iVar5 = iVar5 - iVar11;
          if (iVar5 == 0) break;
          pvVar12 = (void *)*param_3;
        }
      }
      iVar5 = *(int *)(param_1 + 0x368);
      if (iVar5 < 5) {
        iVar5 = 4;
      }
      *(int *)(param_1 + 0x368) = iVar5;
      FUN_0049f780(param_2);
    }
  }
  if (*(int *)(param_1 + 0x100) < *(int *)(param_1 + 0xf8)) {
    FUN_0049f670(param_2,1,0x544e4131);
    local_68 = (long)*(int *)(param_1 + 0xf8);
    iVar5 = FUN_004a1930(&local_68,local_78);
    uVar2 = (long)*param_3 + (long)iVar5;
    if (param_3[1] < uVar2) {
      FUN_004462a0(param_3);
      iVar11 = *(int *)(param_1 + 0x100);
      iVar5 = *(int *)(param_1 + 0xf8);
      if (iVar11 < iVar5) {
LAB_00493d0c:
        lVar9 = (long)iVar11;
        do {
          lVar7 = *(long *)(param_1 + 0xf0);
          local_68 = (long)*(int *)(lVar7 + lVar9 * 0x18);
          iVar5 = FUN_004a1930(&local_68,local_78);
          uVar2 = (long)*param_3 + (long)iVar5;
          if (param_3[1] < uVar2) {
            FUN_004462a0(param_3);
          }
          else {
            memcpy((void *)*param_3,local_78,(long)iVar5);
            *param_3 = uVar2;
          }
          piVar13 = (int *)(lVar7 + lVar9 * 0x18 + 0x10);
          local_68 = (long)*piVar13;
          iVar5 = FUN_004a1930(&local_68,local_78);
          uVar2 = (long)*param_3 + (long)iVar5;
          if (param_3[1] < uVar2) {
            FUN_004462a0(param_3);
            iVar5 = *piVar13;
          }
          else {
            memcpy((void *)*param_3,local_78,(long)iVar5);
            *param_3 = uVar2;
            iVar5 = *piVar13;
          }
          if (0 < iVar5) {
            lVar14 = 0;
            lVar8 = 0;
            plVar1 = (long *)(lVar7 + lVar9 * 0x18 + 8);
            do {
              local_68 = *(long *)(*plVar1 + lVar14);
              iVar5 = FUN_004a1930(&local_68,local_78);
              uVar2 = (long)*param_3 + (long)iVar5;
              if (param_3[1] < uVar2) {
                FUN_004462a0(param_3);
              }
              else {
                memcpy((void *)*param_3,local_78,(long)iVar5);
                *param_3 = uVar2;
              }
              local_68 = *(long *)(*plVar1 + lVar14 + 8);
              iVar5 = FUN_004a1930(&local_68,local_78);
              uVar2 = (long)*param_3 + (long)iVar5;
              if (param_3[1] < uVar2) {
                FUN_004462a0(param_3);
              }
              else {
                memcpy((void *)*param_3,local_78,(long)iVar5);
                *param_3 = uVar2;
              }
              lVar8 = lVar8 + 1;
              lVar14 = lVar14 + 0x10;
            } while (lVar8 < *piVar13);
          }
          iVar5 = *(int *)(param_1 + 0xf8);
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar5);
      }
    }
    else {
      memcpy((void *)*param_3,local_78,(long)iVar5);
      *param_3 = uVar2;
      iVar11 = *(int *)(param_1 + 0x100);
      iVar5 = *(int *)(param_1 + 0xf8);
      if (iVar11 < iVar5) goto LAB_00493d0c;
    }
    *(int *)(param_1 + 0x100) = iVar5;
    pvVar12 = (void *)*param_3;
    uVar3 = ((int)pvVar12 - (int)param_3[2]) + (int)param_3[4] & 3;
    if ((uVar3 != 0) && (iVar5 = 4 - uVar3, iVar5 != 0)) {
      while( true ) {
        iVar11 = iVar5;
        if (0x1f < iVar5) {
          iVar11 = 0x20;
        }
        sVar10 = (size_t)iVar11;
        if (param_3[1] < sVar10 + (long)pvVar12) {
          FUN_004462a0(param_3,&DAT_041415a8,sVar10);
        }
        else {
          memcpy(pvVar12,&DAT_041415a8,sVar10);
          *param_3 = sVar10 + (long)pvVar12;
        }
        iVar5 = iVar5 - iVar11;
        if (iVar5 == 0) break;
        pvVar12 = (void *)*param_3;
      }
    }
    iVar5 = *(int *)(param_1 + 0x368);
    if (iVar5 < 5) {
      iVar5 = 4;
    }
    *(int *)(param_1 + 0x368) = iVar5;
    FUN_0049f780(param_2);
    if (*(int *)(param_1 + 0x88) <= *(int *)(param_1 + 0xa0)) goto LAB_00493c54;
LAB_00493f34:
    FUN_0049f670(param_2,1,0x46535431);
    iVar5 = *(int *)(param_1 + 0x88);
    iVar11 = *(int *)(param_1 + 0xa0);
    if (iVar11 != iVar5) {
      lVar9 = (long)iVar5 * 8 + (long)iVar11 * -8;
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x80) + (long)iVar11 * 8);
      do {
        while( true ) {
          pvVar12 = (void *)*puVar6;
          iVar5 = FUN_0043a2d0(pvVar12);
          uVar2 = (long)*param_3 + (long)(iVar5 + 1);
          if (uVar2 <= param_3[1]) break;
          FUN_004462a0(param_3,pvVar12);
          puVar6 = puVar6 + 1;
          lVar9 = lVar9 + -8;
          if (lVar9 == 0) goto LAB_00493fc8;
        }
        memcpy((void *)*param_3,pvVar12,(long)(iVar5 + 1));
        *param_3 = uVar2;
        puVar6 = puVar6 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
LAB_00493fc8:
      iVar5 = *(int *)(param_1 + 0x88);
    }
    *(int *)(param_1 + 0xa0) = iVar5;
    pvVar12 = (void *)*param_3;
    uVar3 = ((int)pvVar12 - (int)param_3[2]) + (int)param_3[4] & 3;
    if ((uVar3 != 0) && (iVar5 = 4 - uVar3, iVar5 != 0)) {
      while( true ) {
        iVar11 = iVar5;
        if (0x1f < iVar5) {
          iVar11 = 0x20;
        }
        sVar10 = (size_t)iVar11;
        if (param_3[1] < sVar10 + (long)pvVar12) {
          FUN_004462a0(param_3,&DAT_04141588,sVar10);
        }
        else {
          memcpy(pvVar12,&DAT_04141588,sVar10);
          *param_3 = sVar10 + (long)pvVar12;
        }
        iVar5 = iVar5 - iVar11;
        if (iVar5 == 0) break;
        pvVar12 = (void *)*param_3;
      }
    }
    iVar5 = *(int *)(param_1 + 0x368);
    if (iVar5 < 5) {
      iVar5 = 4;
    }
    *(int *)(param_1 + 0x368) = iVar5;
    FUN_0049f780(param_2);
    if (*(int *)(param_1 + 0xc0) <= *(int *)(param_1 + 0xd8)) goto LAB_00493c64;
LAB_0049408c:
    FUN_0049f670(param_2,1,0x41535431);
    iVar5 = *(int *)(param_1 + 0xc0);
    iVar11 = *(int *)(param_1 + 0xd8);
    if (iVar11 != iVar5) {
      lVar9 = (long)iVar5 * 8 + (long)iVar11 * -8;
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0xb8) + (long)iVar11 * 8);
      do {
        while( true ) {
          pvVar12 = (void *)*puVar6;
          iVar5 = FUN_0043a2d0(pvVar12);
          uVar2 = (long)*param_3 + (long)(iVar5 + 1);
          if (uVar2 <= param_3[1]) break;
          FUN_004462a0(param_3,pvVar12);
          puVar6 = puVar6 + 1;
          lVar9 = lVar9 + -8;
          if (lVar9 == 0) goto LAB_00494120;
        }
        memcpy((void *)*param_3,pvVar12,(long)(iVar5 + 1));
        *param_3 = uVar2;
        puVar6 = puVar6 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
LAB_00494120:
      iVar5 = *(int *)(param_1 + 0xc0);
    }
    *(int *)(param_1 + 0xd8) = iVar5;
    pvVar12 = (void *)*param_3;
    uVar3 = ((int)pvVar12 - (int)param_3[2]) + (int)param_3[4] & 3;
    if ((uVar3 != 0) && (iVar5 = 4 - uVar3, iVar5 != 0)) {
      while( true ) {
        iVar11 = iVar5;
        if (0x1f < iVar5) {
          iVar11 = 0x20;
        }
        sVar10 = (size_t)iVar11;
        if (param_3[1] < sVar10 + (long)pvVar12) {
          FUN_004462a0(param_3,&DAT_04141588,sVar10);
        }
        else {
          memcpy(pvVar12,&DAT_04141588,sVar10);
          *param_3 = sVar10 + (long)pvVar12;
        }
        iVar5 = iVar5 - iVar11;
        if (iVar5 == 0) break;
        pvVar12 = (void *)*param_3;
      }
    }
    iVar5 = *(int *)(param_1 + 0x368);
    if (iVar5 < 5) {
      iVar5 = 4;
    }
    *(int *)(param_1 + 0x368) = iVar5;
    FUN_0049f780(param_2);
    if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x40)) goto LAB_00493c74;
LAB_004941e4:
    FUN_0049f670(param_2,1,0x54424459);
    sVar10 = (long)*(int *)(param_1 + 0x38) - (long)*(int *)(param_1 + 0x40);
    uVar2 = (long)*param_3 + sVar10;
    if (param_3[1] < uVar2) {
      FUN_004462a0(param_3);
    }
    else {
      memcpy((void *)*param_3,(void *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x40)),
             sVar10);
      *param_3 = uVar2;
    }
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
    pvVar12 = (void *)*param_3;
    uVar3 = ((int)pvVar12 - (int)param_3[2]) + (int)param_3[4] & 3;
    if ((uVar3 != 0) && (iVar5 = 4 - uVar3, iVar5 != 0)) {
      while( true ) {
        iVar11 = iVar5;
        if (0x1f < iVar5) {
          iVar11 = 0x20;
        }
        sVar10 = (size_t)iVar11;
        if (param_3[1] < sVar10 + (long)pvVar12) {
          FUN_004462a0(param_3,&DAT_041415a8,sVar10);
        }
        else {
          memcpy(pvVar12,&DAT_041415a8,sVar10);
          *param_3 = sVar10 + (long)pvVar12;
        }
        iVar5 = iVar5 - iVar11;
        if (iVar5 == 0) break;
        pvVar12 = (void *)*param_3;
      }
    }
    iVar5 = *(int *)(param_1 + 0x368);
    if (iVar5 < 5) {
      iVar5 = 4;
    }
    *(int *)(param_1 + 0x368) = iVar5;
    FUN_0049f780(param_2);
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x28)) goto LAB_00493c84;
LAB_004942f4:
    FUN_0049f670(param_2,1,0x54485348);
    FUN_004947d0(param_1 + 0x18,param_3);
    pvVar12 = (void *)*param_3;
    uVar3 = ((int)pvVar12 - (int)param_3[2]) + (int)param_3[4] & 3;
    if ((uVar3 != 0) && (iVar5 = 4 - uVar3, iVar5 != 0)) {
      while( true ) {
        iVar11 = iVar5;
        if (0x1f < iVar5) {
          iVar11 = 0x20;
        }
        sVar10 = (size_t)iVar11;
        if (param_3[1] < sVar10 + (long)pvVar12) {
          FUN_004462a0(param_3,&DAT_041415a8,sVar10);
        }
        else {
          memcpy(pvVar12,&DAT_041415a8,sVar10);
          *param_3 = sVar10 + (long)pvVar12;
        }
        iVar5 = iVar5 - iVar11;
        if (iVar5 == 0) break;
        pvVar12 = (void *)*param_3;
      }
    }
    iVar5 = *(int *)(param_1 + 0x368);
    if (iVar5 < 5) {
      iVar5 = 4;
    }
    *(int *)(param_1 + 0x368) = iVar5;
    FUN_0049f780(param_2);
    if (*(int *)(param_1 + 0x128) <= *(int *)(param_1 + 0x140)) goto LAB_004945cc;
  }
  else {
    if (*(int *)(param_1 + 0xa0) < *(int *)(param_1 + 0x88)) goto LAB_00493f34;
LAB_00493c54:
    if (*(int *)(param_1 + 0xd8) < *(int *)(param_1 + 0xc0)) goto LAB_0049408c;
LAB_00493c64:
    if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) goto LAB_004941e4;
LAB_00493c74:
    if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x20)) goto LAB_004942f4;
LAB_00493c84:
    if (*(int *)(param_1 + 0x128) <= *(int *)(param_1 + 0x140)) goto LAB_004945cc;
  }
  FUN_0049f670(param_2,1,0x5450524f);
  local_68 = (long)*(int *)(param_1 + 0x128);
  iVar5 = FUN_004a1930(&local_68,local_78);
  uVar2 = (long)*param_3 + (long)iVar5;
  if (param_3[1] < uVar2) {
    FUN_004462a0(param_3);
    iVar11 = *(int *)(param_1 + 0x140);
    iVar5 = *(int *)(param_1 + 0x128);
    if (iVar11 < iVar5) {
LAB_00494440:
      lVar9 = (long)iVar11;
      lVar7 = lVar9 * 0xc;
      do {
        lVar8 = *(long *)(param_1 + 0x120);
        local_68 = (long)*(int *)(lVar8 + lVar7);
        iVar5 = FUN_004a1930(&local_68,local_78);
        uVar2 = (long)*param_3 + (long)iVar5;
        if (param_3[1] < uVar2) {
          FUN_004462a0(param_3);
        }
        else {
          memcpy((void *)*param_3,local_78,(long)iVar5);
          *param_3 = uVar2;
        }
        lVar8 = lVar8 + lVar7;
        local_68 = (long)*(int *)(lVar8 + 4);
        iVar5 = FUN_004a1930(&local_68,local_78);
        uVar2 = (long)*param_3 + (long)iVar5;
        if (param_3[1] < uVar2) {
          FUN_004462a0(param_3);
        }
        else {
          memcpy((void *)*param_3,local_78,(long)iVar5);
          *param_3 = uVar2;
        }
        local_68 = (long)*(int *)(lVar8 + 8);
        iVar5 = FUN_004a1930(&local_68,local_78);
        uVar2 = (long)*param_3 + (long)iVar5;
        if (param_3[1] < uVar2) {
          FUN_004462a0(param_3);
        }
        else {
          memcpy((void *)*param_3,local_78,(long)iVar5);
          *param_3 = uVar2;
        }
        iVar5 = *(int *)(param_1 + 0x128);
        lVar9 = lVar9 + 1;
        lVar7 = lVar7 + 0xc;
      } while (lVar9 < iVar5);
    }
  }
  else {
    memcpy((void *)*param_3,local_78,(long)iVar5);
    *param_3 = uVar2;
    iVar11 = *(int *)(param_1 + 0x140);
    iVar5 = *(int *)(param_1 + 0x128);
    if (iVar11 < iVar5) goto LAB_00494440;
  }
  *(int *)(param_1 + 0x140) = iVar5;
  pvVar12 = (void *)*param_3;
  uVar3 = ((int)pvVar12 - (int)param_3[2]) + (int)param_3[4] & 3;
  if ((uVar3 != 0) && (iVar5 = 4 - uVar3, iVar5 != 0)) {
    while( true ) {
      iVar11 = iVar5;
      if (0x1f < iVar5) {
        iVar11 = 0x20;
      }
      sVar10 = (size_t)iVar11;
      if (param_3[1] < sVar10 + (long)pvVar12) {
        FUN_004462a0(param_3,&DAT_041415a8,sVar10);
      }
      else {
        memcpy(pvVar12,&DAT_041415a8,sVar10);
        *param_3 = sVar10 + (long)pvVar12;
      }
      iVar5 = iVar5 - iVar11;
      if (iVar5 == 0) break;
      pvVar12 = (void *)*param_3;
    }
  }
  iVar5 = *(int *)(param_1 + 0x368);
  if (iVar5 < 5) {
    iVar5 = 4;
  }
  *(int *)(param_1 + 0x368) = iVar5;
  FUN_0049f780(param_2);
LAB_004945cc:
  if (*(int *)(param_1 + 0x158) < *(int *)(param_1 + 0x150)) {
    FUN_0049f670(param_2,1,0x54504853);
    FUN_004947d0(param_1 + 0x148,param_3);
    pvVar12 = (void *)*param_3;
    uVar3 = ((int)pvVar12 - (int)param_3[2]) + (int)param_3[4] & 3;
    if ((uVar3 != 0) && (iVar5 = 4 - uVar3, iVar5 != 0)) {
      while( true ) {
        iVar11 = iVar5;
        if (0x1f < iVar5) {
          iVar11 = 0x20;
        }
        sVar10 = (size_t)iVar11;
        if (param_3[1] < sVar10 + (long)pvVar12) {
          FUN_004462a0(param_3,&DAT_041415a8,sVar10);
        }
        else {
          memcpy(pvVar12,&DAT_041415a8,sVar10);
          *param_3 = sVar10 + (long)pvVar12;
        }
        iVar5 = iVar5 - iVar11;
        if (iVar5 == 0) break;
        pvVar12 = (void *)*param_3;
      }
    }
    iVar5 = *(int *)(param_1 + 0x368);
    if (iVar5 < 5) {
      iVar5 = 4;
    }
    *(int *)(param_1 + 0x368) = iVar5;
    FUN_0049f780(param_2);
  }
  FUN_0049f670(param_2,1,0x54504144);
  pvVar12 = (void *)*param_3;
  uVar3 = ((int)pvVar12 - (int)param_3[2]) + (int)param_3[4] & 3;
  if ((uVar3 != 0) && (iVar5 = 4 - uVar3, iVar5 != 0)) {
    while( true ) {
      iVar11 = iVar5;
      if (0x1f < iVar5) {
        iVar11 = 0x20;
      }
      sVar10 = (size_t)iVar11;
      if (param_3[1] < sVar10 + (long)pvVar12) {
        FUN_004462a0(param_3,&DAT_041415a8,sVar10);
      }
      else {
        memcpy(pvVar12,&DAT_041415a8,sVar10);
        *param_3 = sVar10 + (long)pvVar12;
      }
      iVar5 = iVar5 - iVar11;
      if (iVar5 == 0) break;
      pvVar12 = (void *)*param_3;
    }
  }
  iVar5 = *(int *)(param_1 + 0x368);
  if (iVar5 < 5) {
    iVar5 = 4;
  }
  *(int *)(param_1 + 0x368) = iVar5;
  FUN_0049f780(param_2);
  FUN_0049f780(param_2);
  return;
}

