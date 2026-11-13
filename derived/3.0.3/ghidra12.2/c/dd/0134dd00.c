
/* WARNING: Removing unreachable block (ram,0x0134df24) */
/* WARNING: Removing unreachable block (ram,0x0134df54) */
/* WARNING: Removing unreachable block (ram,0x0134df34) */
/* WARNING: Removing unreachable block (ram,0x0134df40) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0134dd00(undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined **ppuStack_34f68;
  char *pcStack_34f60;
  uint uStack_348b8;
  undefined **ppuStack_348b0;
  char *pcStack_348a8;
  undefined8 uStack_348a0;
  undefined8 uStack_34898;
  uint uStack_34890;
  undefined **ppuStack_34888;
  undefined4 uStack_34880;
  undefined1 auStack_3487c [2];
  undefined4 uStack_3487a;
  undefined1 auStack_34876 [107510];
  undefined8 *puStack_1a480;
  undefined1 auStack_1a478 [8];
  undefined8 uStack_1a470;
  undefined4 uStack_1a468;
  undefined1 auStack_1a464 [255];
  undefined1 uStack_1a365;
  ulong local_78;
  undefined8 *apuStack_70 [2];
  
  if (*param_2 == 0) {
    return;
  }
  lVar12 = 1;
  ppuStack_34f68 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  pcStack_34f60 = "FieldPresetParamsWherearenMainIslandHeap";
  plVar3 = (long *)FUN_038c6d48(&LAB_00500000,&ppuStack_34f68,*param_2,8,1,0);
  plVar5 = (long *)PTR_DAT_04bb3350;
  if (plVar3 != (long *)0x0) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)(lVar4 + 0xa8);
    *(long **)(lVar4 + 0xa8) = plVar3;
  }
  FUN_01340710(&ppuStack_34f68,&DAT_051987e8,&DAT_051987f8,0);
  ppuStack_34f68 = &PTR_FUN_049928b8;
  uStack_348b8 = 0;
  memset(auStack_1a478,0,0x1a400);
  iVar9 = 0;
  do {
    lVar4 = (long)iVar9 * 0xe;
    iVar9 = iVar9 + 1;
    auStack_1a478[lVar4 + 0xc] = 0;
    *(undefined4 *)(auStack_1a478 + lVar4) = 0;
    auStack_1a478[lVar4 + 4] = 0;
    *(undefined4 *)(auStack_1a478 + lVar4 + 6) = 0;
    auStack_1a478[lVar4 + 10] = 0;
  } while (iVar9 != 0x1e00);
  pcStack_348a8 = "mLandMaking";
  uStack_348a0 = 0;
  uStack_34898 = 0;
  uStack_34890 = 0;
  ppuStack_348b0 = &PTR_FUN_04992b58;
  ppuStack_34888 = &PTR_LAB_04992c98;
  memset(&uStack_34880,0,0x1a400);
  iVar9 = 0;
  do {
    lVar4 = (long)iVar9 * 0xe;
    iVar9 = iVar9 + 1;
    auStack_34876[lVar4 + 2] = 0;
    *(undefined4 *)((long)&uStack_34880 + lVar4) = 0;
    auStack_3487c[lVar4] = 0;
    *(undefined4 *)(auStack_3487c + lVar4 + 2) = 0;
    auStack_34876[lVar4] = 0;
  } while (iVar9 != 0x1e00);
  puStack_1a480 = (undefined8 *)0x0;
  (*(code *)ppuStack_348b0[7])(&ppuStack_348b0,&ppuStack_34f68);
  lVar4 = (*(code *)ppuStack_348b0[0x1e])(&ppuStack_348b0);
  memcpy((void *)(lVar4 + 8),&uStack_1a470,0x1a400);
  uVar2 = uStack_34890 | 0x1000000;
  uVar1 = uStack_34890 >> 7;
  uStack_34890 = uVar2;
  if ((uVar1 & 1) != 0) goto LAB_0134e0e4;
  (**(code **)(**(long **)(DAT_05aed538 + 0x330) + 0x88))(*(long **)(DAT_05aed538 + 0x330),0);
  local_78 = 0;
  apuStack_70[0] = (undefined8 *)0x0;
  nn::os::GetCurrentStackInfo((ulong *)apuStack_70,&local_78);
  if ((auStack_1a478 < apuStack_70[0]) ||
     ((undefined8 *)(local_78 + (long)apuStack_70[0]) <= auStack_1a478)) {
    if (DAT_05ae7600 != 0) {
      if (DAT_05ae7550 != 0) {
        lVar4 = (long)DAT_05ae7550 << 3;
        puVar11 = DAT_05ae7558;
        do {
          uVar7 = (**(code **)(*(long *)*puVar11 + 0x88))((long *)*puVar11,auStack_1a478);
          if ((uVar7 & 1) != 0) goto LAB_0134df94;
          puVar11 = puVar11 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
      if (DAT_05ae7580 != 0) {
        lVar4 = (long)DAT_05ae7580 << 3;
        puVar11 = DAT_05ae7588;
        do {
          uVar7 = (**(code **)(*(long *)*puVar11 + 0x88))((long *)*puVar11,auStack_1a478);
          if ((uVar7 & 1) != 0) goto LAB_0134df94;
          puVar11 = puVar11 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    puStack_1a480 = (undefined8 *)auStack_1a478;
  }
  else {
LAB_0134df94:
    lVar4 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      puStack_1a480 = malloc(0x1a408);
    }
    else {
      plVar5 = *(long **)(DAT_05aed538 + 0x330);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar4 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          puStack_1a480 = (undefined8 *)0x0;
          goto LAB_0134e0b4;
        }
      }
      puStack_1a480 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x1a408,8);
    }
LAB_0134e0b4:
    *puStack_1a480 = &PTR_LAB_04992c98;
    memcpy(puStack_1a480 + 1,&uStack_1a470,0x1a400);
  }
  plVar5 = (long *)PTR_DAT_04bb3350;
LAB_0134e0e4:
  uStack_34890 = uStack_34890 & 0xfeffffff;
  ppuStack_348b0 = &PTR_FUN_04992a18;
  uStack_1a365 = 0;
  uStack_348b8 = uStack_348b8 | 100;
  uStack_1a468 = 0x100;
  uStack_1a470 = auStack_1a464;
  auStack_1a464[0] = 0;
  auStack_1a478 = (undefined1  [8])(PTR_DAT_04bb21f8 + 0x10);
  uVar7 = (*(code *)ppuStack_34f68[0x1e])(&ppuStack_34f68,auStack_1a478,1);
  if ((uVar7 & 1) != 0) {
    FUN_03c27e60(&ppuStack_34f68,auStack_1a478,plVar3);
  }
  lVar4 = param_2[1];
  if ((uStack_348b8 & 1) == 0) {
    uVar10 = *(undefined8 *)(lVar4 + 0xa8);
    lVar6 = (*(code *)ppuStack_348b0[0x1e])(&ppuStack_348b0);
    FUN_01342080(&ppuStack_34f68,uVar10,lVar6 + 8,0x60,0x50);
  }
  if ((uStack_348b8 >> 1 & 1) == 0) {
    FUN_013425a0(&ppuStack_34f68,*(undefined8 *)(lVar4 + 0xb8),6,5);
  }
  if ((uStack_348b8 >> 2 & 1) == 0) {
    FUN_0134278c(&ppuStack_34f68,lVar4,0x1f);
  }
  if ((uStack_348b8 >> 3 & 1) == 0) {
    FUN_01342bc0(&ppuStack_34f68,lVar4);
  }
  if ((uStack_348b8 >> 4 & 1) == 0) {
    FUN_01342d60(&ppuStack_34f68,lVar4);
  }
  if ((uStack_348b8 >> 5 & 1) == 0) {
    FUN_01342f00(&ppuStack_34f68,lVar4);
  }
  if ((uStack_348b8 >> 6 & 1) == 0) {
    FUN_01343124(&ppuStack_34f68);
  }
  (*(code *)ppuStack_34f68[4])(&ppuStack_34f68);
  ppuStack_34f68 = &PTR_FUN_049928b8;
  ppuStack_348b0 = &PTR_FUN_04992b58;
  uVar7 = (**(code **)(**(long **)(DAT_05aed538 + 0x330) + 0x88))
                    (*(long **)(DAT_05aed538 + 0x330),puStack_1a480);
  if (((uVar7 & 1) != 0) && (puStack_1a480 != (undefined8 *)0x0)) {
    if (DAT_05ae7600 == 0) {
      free(puStack_1a480);
    }
    else {
      plVar8 = (long *)FUN_038cb610(DAT_05ae7600,puStack_1a480);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,puStack_1a480);
      }
    }
  }
  FUN_01341630(&ppuStack_34f68);
  if (lVar12 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*plVar5 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar12;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return;
}

