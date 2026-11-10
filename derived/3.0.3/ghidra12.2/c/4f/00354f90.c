
byte FUN_00354f90(long param_1,uint param_2,undefined4 param_3,ushort param_4,uint param_5,
                 byte param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  
  lVar8 = param_1 + 0x30;
LAB_00354fdc:
  uVar2 = 0x2d;
  if ((param_2 == 0x2011 & param_6) == 0) {
    uVar2 = param_2;
  }
  pbVar1 = (byte *)(param_1 + (ulong)param_4 + 0x1888);
  bVar7 = *pbVar1;
  if (bVar7 == 0) {
    return 0;
  }
  uVar12 = 0;
  lVar13 = *(long *)(param_1 + (ulong)param_4 * 8 + 0x18a8);
  do {
    uVar6 = (ulong)*(byte *)(lVar13 + uVar12);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x1c28) + uVar6 * 4);
    uVar9 = (ulong)uVar3;
    if (uVar3 == 0) {
LAB_00355084:
      if (*(char *)(param_1 + 0x1bd1) == '\0') {
        iVar4 = 0;
      }
      else {
        iVar4 = (**(code **)(param_1 + 0x1bd8))();
        uVar6 = (ulong)*(byte *)(lVar13 + uVar12);
      }
      FUN_00356940(param_1,uVar6,iVar4);
      uVar9 = nn::fontll::ScalableFontEngine::CheckGlyphExist
                        ((int)*(undefined8 *)(param_1 + 0x10) + iVar4 * 0xb8);
      if ((uVar9 & 1) != 0) break;
      bVar7 = *pbVar1;
    }
    else if (0 < (int)uVar3) {
      puVar10 = (uint *)(*(long *)(param_1 + 0x1c38) + uVar6 * 0x40);
      puVar11 = (uint *)(*(long *)(param_1 + 0x1c30) + uVar6 * 0x40);
      do {
        if ((*puVar11 <= uVar2) && (uVar2 <= *puVar10)) goto LAB_00355084;
        uVar9 = uVar9 - 1;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar9 != 0);
    }
    uVar12 = uVar12 + 1;
    if (bVar7 <= uVar12) {
      return 0;
    }
  } while( true );
  param_4 = (ushort)*(byte *)(lVar13 + uVar12);
  lVar13 = FUN_00351550(lVar8,uVar2,param_3,param_4);
  if (lVar13 != 0) {
    bVar7 = *(byte *)(lVar13 + 0x38);
    *(byte *)(lVar13 + 0x38) = bVar7 | 1;
    if (-1 < (int)param_5) {
      *(uint *)(lVar13 + 0x3c) = *(uint *)(lVar13 + 0x3c) | 1 << (ulong)(param_5 & 0x1f);
    }
    return bVar7 >> 1 & 1;
  }
  plVar5 = (long *)FUN_0035159c(lVar8,uVar2,param_3,param_4);
  if (plVar5 != (long *)0x0) {
    *(byte *)(plVar5 + 7) = *(byte *)(plVar5 + 7) | 3;
    if (-1 < (int)param_5) {
      *(uint *)((long)plVar5 + 0x3c) = *(uint *)((long)plVar5 + 0x3c) | 1 << (ulong)(param_5 & 0x1f)
      ;
    }
    lVar8 = *plVar5;
    plVar14 = (long *)(param_1 + 0x50);
    *plVar5 = *plVar14;
    *(long **)(lVar8 + 8) = plVar14;
    *(long **)(*plVar14 + 8) = plVar5;
    *plVar14 = lVar8;
    return 1;
  }
  if (*(long **)(param_1 + 0x78) == (long *)(param_1 + 0x70)) goto LAB_0035517c;
  iVar4 = 0;
  plVar5 = *(long **)(param_1 + 0x78);
  do {
    plVar14 = (long *)plVar5[1];
    if ((*(byte *)(plVar5 + 7) & 0x11) == 0) {
      lVar13 = *plVar14;
      *(long **)(*plVar5 + 8) = plVar14;
      *plVar14 = *plVar5;
      *(long **)(lVar13 + 8) = plVar5;
      *plVar5 = lVar13;
      FUN_003517e0(lVar8,(int)plVar5[6],*(undefined2 *)((long)plVar5 + 0x36),
                   *(undefined2 *)((long)plVar5 + 0x34));
      iVar4 = iVar4 + 1;
    }
    plVar5 = plVar14;
  } while (plVar14 != (long *)(param_1 + 0x70));
  param_6 = 0;
  param_2 = uVar2;
  if (iVar4 == 0) {
LAB_0035517c:
    *(undefined4 *)(param_1 + 0x1bcc) = 1;
    return 0;
  }
  goto LAB_00354fdc;
}

