
/* WARNING: Type propagation algorithm not settling */

void FUN_01327a80(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 *__src;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined ***pppuVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined **ppuStack_49a60;
  char *pcStack_49a58;
  byte bStack_49a3d;
  long alStack_49a38 [19];
  undefined **ppuStack_499a0;
  char *pcStack_49998;
  undefined8 uStack_49990;
  undefined1 *puStack_49988;
  uint uStack_49980;
  undefined **ppuStack_49978;
  undefined ***pppuStack_41b70;
  undefined ***pppuStack_3b970;
  undefined ***pppuStack_24d70;
  undefined *puStack_24d68;
  undefined1 *puStack_24d60;
  undefined4 uStack_24d58;
  undefined1 auStack_24d54 [63];
  undefined1 uStack_24d15;
  undefined *puStack_24d10;
  undefined1 *puStack_24d08;
  int iStack_24d00;
  undefined1 auStack_24cfc [63];
  undefined1 uStack_24cbd;
  long lStack_24cb8;
  undefined8 uStack_24cb0;
  undefined **ppuStack_24ca8;
  undefined1 *puStack_24ca0;
  undefined4 uStack_24c98;
  undefined1 auStack_24c94 [255];
  undefined1 uStack_24b95;
  undefined ***local_a8;
  char *pcStack_a0;
  undefined ***local_98;
  char *pcStack_90;
  undefined ***local_88;
  undefined8 *puStack_80;
  undefined4 local_78;
  ulong local_70 [2];
  
  puVar4 = PTR_DAT_04bb2020;
  if (*param_2 == 0) {
    return;
  }
  ppuStack_49a60 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  pcStack_49a58 = "FieldPresetParamsCloudIsland";
  plVar5 = (long *)FUN_038c6d48(&LAB_00500000,&ppuStack_49a60,*param_2,8,1,0);
  lStack_24cb8 = param_2[1];
  uStack_24cbd = 0;
  iStack_24d00 = 0x40;
  auStack_24cfc[0] = 0;
  puStack_24d60 = auStack_24d54;
  uStack_24d58 = 0x40;
  uStack_24d15 = 0;
  auStack_24d54[0] = 0;
  puStack_24d68 = PTR_DAT_04bb2bc0 + 0x10;
  puStack_24d10 = puStack_24d68;
  puStack_24d08 = auStack_24cfc;
  (**(code **)(DAT_051925e0 + 0x18))(&DAT_051925e0);
  __src = DAT_051925e8;
  if (auStack_24cfc != DAT_051925e8) {
    (**(code **)(DAT_051925e0 + 0x18))(&DAT_051925e0);
    lVar10 = 0;
    do {
      if (DAT_051925e8[lVar10] == '\0') goto LAB_01327bbc;
      if (DAT_051925e8[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_01327bbc;
      }
      if (DAT_051925e8[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_01327bbc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_01327bbc:
    iVar2 = (int)lVar10;
    if (iStack_24d00 <= (int)lVar10) {
      iVar2 = iStack_24d00 + -1;
    }
    memcpy(auStack_24cfc,__src,(long)iVar2);
    auStack_24cfc[iVar2] = 0;
  }
  FUN_01328aa0(param_1,&puStack_24d68,0);
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 == 2) {
    FUN_00751ec0(&ppuStack_49a60,&puStack_24d10,&puStack_24d68,0);
    local_a8 = (undefined ***)(puVar4 + 0x10);
    pcStack_a0 = "mData";
    pcStack_90 = "PlacementDataBuffer";
    ppuStack_49a60 = &PTR_LAB_0498ebb0;
    puStack_80 = &DAT_0407ebb1;
    local_78 = 8;
    local_98 = local_a8;
    local_88 = local_a8;
    memset(&ppuStack_24ca8,0,0x24c00);
    FUN_0132c2d0(&ppuStack_499a0,&local_a8,&ppuStack_24ca8,&ppuStack_49a60);
    uStack_24b95 = 0;
    ppuStack_499a0 = &PTR_FUN_0498ed20;
    puStack_24ca0 = auStack_24c94;
    uStack_24c98 = 0x100;
    auStack_24c94[0] = 0;
    ppuStack_24ca8 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
    uVar6 = (*(code *)ppuStack_49a60[0x1e])(&ppuStack_49a60,&ppuStack_24ca8,1);
    if ((uVar6 & 1) != 0) {
      FUN_03c27e60(&ppuStack_49a60,&ppuStack_24ca8,plVar5);
    }
    if ((bStack_49a3d & 1) != 0) {
      uStack_24cb0 = 0x6000000070;
      ppuStack_24ca8 = &PTR_FUN_0498efd8;
      puStack_24ca0 = (undefined1 *)&ppuStack_49a60;
      FUN_01354430(&lStack_24cb8,&ppuStack_24ca8);
    }
    (*(code *)ppuStack_49a60[4])(&ppuStack_49a60);
    ppuStack_49a60 = &PTR_LAB_0498ebb0;
    ppuStack_499a0 = &PTR_FUN_0498ee60;
    uVar6 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                      (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),pppuStack_24d70);
  }
  else if (iVar2 == 1) {
    FUN_00751ec0(&ppuStack_49a60,&puStack_24d10,&puStack_24d68,0);
    ppuStack_49a60 = &PTR_LAB_0498e760;
    memset(&ppuStack_24ca8,0,0xe000);
    ppuStack_499a0 = &PTR_LAB_0498ea10;
    pcStack_49998 = "mData";
    uStack_49990 = 0;
    uStack_49980 = 8;
    ppuStack_49978 = &PTR_LAB_0498eb50;
    pppuStack_3b970 = (undefined ***)0x0;
    if (alStack_49a38[0] == 0) {
      plVar9 = alStack_49a38;
    }
    else {
      do {
        lVar10 = alStack_49a38[0];
        alStack_49a38[0] = *(long *)(lVar10 + 0x10);
      } while (alStack_49a38[0] != 0);
      plVar9 = (long *)(lVar10 + 0x10);
    }
    *plVar9 = (long)&ppuStack_499a0;
    puStack_49988 = (undefined1 *)&ppuStack_49a60;
    lVar10 = (*(code *)ppuStack_499a0[0x1e])(&ppuStack_499a0);
    memcpy((void *)(lVar10 + 8),&puStack_24ca0,0xe000);
    puVar4 = PTR_DAT_04bb3058;
    uVar3 = uStack_49980 | 0x1000000;
    uVar1 = uStack_49980 >> 7;
    uStack_49980 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar6 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                        (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),pppuStack_3b970);
      pppuVar8 = pppuStack_3b970;
      if (((uVar6 & 1) != 0) && (pppuStack_3b970 != (undefined ***)0x0)) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(pppuStack_3b970);
        }
        else {
          plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pppuStack_3b970);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x38))(plVar9,pppuVar8);
          }
        }
      }
      pppuStack_3b970 = (undefined ***)0x0;
      local_a8 = (undefined ***)0x0;
      local_70[0] = 0;
      nn::os::GetCurrentStackInfo((ulong *)&local_a8,local_70);
      if ((&ppuStack_24ca8 < local_a8) ||
         ((undefined ***)(local_70[0] + (long)local_a8) <= &ppuStack_24ca8)) {
        if (*(long *)PTR_DAT_04bb2698 != 0) {
          if (*(int *)PTR_DAT_04bd0ca0 != 0) {
            puVar11 = *(undefined8 **)(PTR_DAT_04bd0ca0 + 8);
            lVar10 = (long)*(int *)PTR_DAT_04bd0ca0 << 3;
            do {
              uVar6 = (**(code **)(*(long *)*puVar11 + 0x88))((long *)*puVar11,&ppuStack_24ca8);
              if ((uVar6 & 1) != 0) goto LAB_013280a8;
              puVar11 = puVar11 + 1;
              lVar10 = lVar10 + -8;
            } while (lVar10 != 0);
          }
          if (*(int *)PTR_DAT_04bd0d70 != 0) {
            puVar11 = *(undefined8 **)(PTR_DAT_04bd0d70 + 8);
            lVar10 = (long)*(int *)PTR_DAT_04bd0d70 << 3;
            do {
              uVar6 = (**(code **)(*(long *)*puVar11 + 0x88))((long *)*puVar11,&ppuStack_24ca8);
              if ((uVar6 & 1) != 0) goto LAB_013280a8;
              puVar11 = puVar11 + 1;
              lVar10 = lVar10 + -8;
            } while (lVar10 != 0);
          }
        }
        pppuVar8 = &ppuStack_24ca8;
      }
      else {
LAB_013280a8:
        lVar10 = *(long *)PTR_DAT_04bb2698;
        if (lVar10 == 0) {
          pppuVar8 = malloc(0xe008);
        }
        else {
          plVar9 = *(long **)(*(long *)puVar4 + 0x330);
          if (plVar9 == (long *)0x0) {
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar9 = (long *)(lVar10 + 8);
            if (lVar7 != 0) {
              plVar9 = (long *)(lVar7 + 0xa8);
            }
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) {
              pppuVar8 = (undefined ***)0x0;
              goto LAB_013281b0;
            }
          }
          pppuVar8 = (undefined ***)(**(code **)(*plVar9 + 0x30))(plVar9,0xe008,8);
        }
LAB_013281b0:
        *pppuVar8 = &PTR_LAB_0498eb50;
        memcpy(pppuVar8 + 1,&puStack_24ca0,0xe000);
      }
      pppuStack_3b970 = pppuVar8;
    }
    uStack_24b95 = 0;
    uStack_49980 = uStack_49980 & 0xfeffffff;
    ppuStack_499a0 = &PTR_LAB_0498e8d0;
    uStack_24c98 = 0x100;
    puStack_24ca0 = auStack_24c94;
    auStack_24c94[0] = 0;
    ppuStack_24ca8 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
    uVar6 = (*(code *)ppuStack_49a60[0x1e])(&ppuStack_49a60,&ppuStack_24ca8,1);
    if ((uVar6 & 1) != 0) {
      FUN_03c27e60(&ppuStack_49a60,&ppuStack_24ca8,plVar5);
    }
    if ((bStack_49a3d & 1) != 0) {
      uStack_24cb0 = 0x4000000040;
      ppuStack_24ca8 = &PTR_FUN_0498eb88;
      puStack_24ca0 = (undefined1 *)&ppuStack_49a60;
      FUN_01354430(&lStack_24cb8,&ppuStack_24ca8);
    }
    (*(code *)ppuStack_49a60[4])(&ppuStack_49a60);
    ppuStack_49a60 = &PTR_LAB_0498e760;
    ppuStack_499a0 = &PTR_LAB_0498ea10;
    uVar6 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                      (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),pppuStack_3b970);
    pppuStack_24d70 = pppuStack_3b970;
  }
  else {
    if (iVar2 != 0) goto joined_r0x01328324;
    FUN_00751ec0(&ppuStack_49a60,&puStack_24d10,&puStack_24d68,0);
    local_a8 = (undefined ***)(puVar4 + 0x10);
    pcStack_a0 = "mData";
    pcStack_90 = "PlacementDataBuffer";
    ppuStack_49a60 = &PTR_LAB_0498e310;
    puStack_80 = &DAT_0407ebb1;
    local_78 = 8;
    local_98 = local_a8;
    local_88 = local_a8;
    memset(&ppuStack_24ca8,0,0x7e00);
    FUN_013294c0(&ppuStack_499a0,&local_a8,&ppuStack_24ca8,&ppuStack_49a60);
    uStack_24b95 = 0;
    ppuStack_499a0 = &PTR_FUN_0498e480;
    puStack_24ca0 = auStack_24c94;
    uStack_24c98 = 0x100;
    auStack_24c94[0] = 0;
    ppuStack_24ca8 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
    uVar6 = (*(code *)ppuStack_49a60[0x1e])(&ppuStack_49a60,&ppuStack_24ca8,1);
    if ((uVar6 & 1) != 0) {
      FUN_03c27e60(&ppuStack_49a60,&ppuStack_24ca8,plVar5);
    }
    if ((bStack_49a3d & 1) != 0) {
      uStack_24cb0 = 0x3000000030;
      ppuStack_24ca8 = &PTR_FUN_0498e738;
      puStack_24ca0 = (undefined1 *)&ppuStack_49a60;
      FUN_01354430(&lStack_24cb8,&ppuStack_24ca8);
    }
    (*(code *)ppuStack_49a60[4])(&ppuStack_49a60);
    ppuStack_499a0 = &PTR_FUN_0498e5c0;
    ppuStack_49a60 = &PTR_LAB_0498e310;
    uVar6 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                      (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),pppuStack_41b70);
    pppuStack_24d70 = pppuStack_41b70;
  }
  if (((uVar6 & 1) != 0) && (pppuStack_24d70 != (undefined ***)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pppuStack_24d70);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pppuStack_24d70);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pppuStack_24d70);
      }
    }
  }
joined_r0x01328324:
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return;
}

