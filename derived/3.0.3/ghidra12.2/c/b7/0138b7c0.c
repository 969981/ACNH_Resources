
/* WARNING: Removing unreachable block (ram,0x0138b864) */

void FUN_0138b7c0(long param_1,int *param_2)

{
  short *psVar1;
  undefined8 *puVar2;
  short *psVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  short *psVar12;
  long lVar13;
  undefined *local_78;
  undefined2 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  iVar4 = *(int *)(param_1 + 0x90);
  if (-0x17df00c4 < iVar4) {
    if (iVar4 != -0x17df00c3) {
      if (iVar4 != 0x10cdc40c) goto LAB_0138b920;
      if (DAT_05574040 == 0) {
        return;
      }
      local_68 = CONCAT44(local_68._4_4_,1);
      if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
        return;
      }
      lVar5 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
      if (lVar5 == 0) {
        return;
      }
      lVar8 = *(long *)(&LAB_005d3f40 + lVar5);
      if (lVar8 == 0) {
        uVar6 = 0;
      }
      else {
        if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          lVar8 = *(long *)(&LAB_005d3f40 + lVar5);
          uVar6 = uVar6 & 0xffffffff;
          if (lVar8 == 0) goto LAB_0138bc30;
        }
        plVar7 = *(long **)(lVar8 + 0x20);
        if (plVar7 != (long *)0x0) {
          local_68 = *(long *)(&LAB_005d3f20 + lVar5);
          local_60 = *(undefined8 *)(&LAB_005d3f28 + lVar5);
          local_58 = 0xe10;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
        }
      }
LAB_0138bc30:
      psVar1 = (short *)(*(long *)(&LAB_005d3f28 + lVar5) + *(long *)(&LAB_005d3f20 + lVar5));
      memset(psVar1,0,0xe10);
      lVar8 = 0;
      do {
        puVar2 = (undefined8 *)((long)psVar1 + lVar8);
        *puVar2 = 0xfffe;
        FUN_0277d4ac(puVar2);
        lVar8 = lVar8 + 0xc;
        *(undefined4 *)(puVar2 + 1) = 0;
      } while (lVar8 != 0xe10);
      iVar4 = *param_2;
      if (iVar4 != 0) {
        lVar8 = *(long *)(param_2 + 2);
        uVar9 = 0;
        iVar11 = 0;
        do {
          psVar12 = (short *)(lVar8 + (long)iVar11 * 0xc);
          if (*psVar12 != -2) {
            psVar3 = psVar1 + (ulong)uVar9 * 6;
            if (299 < uVar9) {
              psVar3 = psVar1;
            }
            *psVar3 = *psVar12;
            *(char *)(psVar3 + 1) = (char)psVar12[1];
            *(undefined1 *)((long)psVar3 + 3) = *(undefined1 *)((long)psVar12 + 3);
            *(undefined4 *)(psVar3 + 2) = *(undefined4 *)(psVar12 + 2);
            *(undefined4 *)(psVar3 + 4) = *(undefined4 *)(lVar8 + (long)iVar11 * 0xc + 8);
            if (0x12a < (int)uVar9) break;
            uVar9 = uVar9 + 1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar4 != iVar11);
      }
      if ((uVar6 & 1) == 0) {
        return;
      }
      lVar5 = *(long *)(&LAB_005d3f40 + lVar5);
      goto joined_r0x0138bcfc;
    }
    local_78 = PTR_DAT_04bb7648 + 0x10;
    local_70 = *DAT_05ab5ea8;
    lVar5 = FUN_03775a30(&local_78);
    if (lVar5 == 0) {
      return;
    }
    lVar8 = *(long *)(lVar5 + 0x108);
    if (lVar8 == 0) {
      uVar6 = 0;
    }
    else {
      if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        lVar8 = *(long *)(lVar5 + 0x108);
        uVar6 = uVar6 & 0xffffffff;
        if (lVar8 == 0) goto LAB_0138bb1c;
      }
      plVar7 = *(long **)(lVar8 + 0x20);
      if (plVar7 != (long *)0x0) {
        local_68 = *(long *)(lVar5 + 0xe8);
        local_60 = *(undefined8 *)(lVar5 + 0xf0);
        local_58 = 0x48a8;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
      }
    }
LAB_0138bb1c:
    lVar8 = *(long *)(lVar5 + 0xf0) + *(long *)(lVar5 + 0xe8);
    psVar1 = (short *)(lVar8 + 4);
    memset(psVar1,0,0x1560);
    lVar8 = lVar8 + 6;
    lVar13 = 0x1c8;
    do {
      *(undefined8 *)(lVar8 + -2) = 0xfffe;
      FUN_0277d4ac((undefined8 *)(lVar8 + -2));
      *(undefined4 *)(lVar8 + 6) = 0;
      lVar8 = lVar8 + 0xc;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    iVar4 = *param_2;
    if (iVar4 != 0) {
      lVar8 = *(long *)(param_2 + 2);
      uVar10 = 0;
      iVar11 = 0;
      do {
        psVar12 = (short *)(lVar8 + (long)iVar11 * 0xc);
        if (*psVar12 != -2) {
          uVar9 = (uint)uVar10;
          psVar3 = psVar1 + uVar10 * 6;
          if (0x1c7 < uVar9) {
            psVar3 = psVar1;
          }
          *psVar3 = *psVar12;
          *(char *)(psVar3 + 1) = (char)psVar12[1];
          *(undefined1 *)((long)psVar3 + 3) = *(undefined1 *)((long)psVar12 + 3);
          *(undefined4 *)(psVar3 + 2) = *(undefined4 *)(psVar12 + 2);
          *(undefined4 *)(psVar3 + 4) = *(undefined4 *)(lVar8 + (long)iVar11 * 0xc + 8);
          if (0x1c6 < (int)uVar9) break;
          uVar10 = (ulong)(uVar9 + 1);
        }
        iVar11 = iVar11 + 1;
      } while (iVar4 != iVar11);
    }
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar5 = *(long *)(lVar5 + 0x108);
    goto joined_r0x0138bcfc;
  }
  if ((iVar4 != -0x7975b8e8) && (iVar4 != -0x3e092032)) {
LAB_0138b920:
    if (((DAT_05ac0a90 != iVar4) &&
        ((((DAT_05ac0aa0 != iVar4 && (DAT_05ac0ab0 != iVar4)) && (DAT_05ac0ac0 != iVar4)) &&
         ((DAT_05ac0ad0 != iVar4 && (DAT_05ac0ae0 != iVar4)))))) &&
       ((DAT_05ac0af0 != iVar4 &&
        (((DAT_05ac0b00 != iVar4 && (DAT_05ac0b10 != iVar4)) && (DAT_05ac0b20 != iVar4)))))) {
      return;
    }
  }
  lVar5 = FUN_03776f00();
  if (lVar5 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar5 + 0x60);
  if (lVar8 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar5 + 0x60) == 0) goto LAB_0138ba14;
      plVar7 = *(long **)(*(long *)(lVar5 + 0x60) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_68 = *(long *)(lVar5 + 0x40);
      local_60 = *(undefined8 *)(lVar5 + 0x48);
      local_58 = 0xe10;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
  }
LAB_0138ba14:
  psVar1 = (short *)(*(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x40));
  memset(psVar1,0,0xe10);
  lVar8 = 0;
  do {
    puVar2 = (undefined8 *)((long)psVar1 + lVar8);
    *puVar2 = 0xfffe;
    FUN_0277d4ac(puVar2);
    lVar8 = lVar8 + 0xc;
    *(undefined4 *)(puVar2 + 1) = 0;
  } while (lVar8 != 0xe10);
  iVar4 = *param_2;
  if (iVar4 != 0) {
    lVar8 = *(long *)(param_2 + 2);
    uVar9 = 0;
    iVar11 = 0;
    do {
      psVar12 = (short *)(lVar8 + (long)iVar11 * 0xc);
      if (*psVar12 != -2) {
        psVar3 = psVar1 + (ulong)uVar9 * 6;
        if (299 < uVar9) {
          psVar3 = psVar1;
        }
        *psVar3 = *psVar12;
        *(char *)(psVar3 + 1) = (char)psVar12[1];
        *(undefined1 *)((long)psVar3 + 3) = *(undefined1 *)((long)psVar12 + 3);
        *(undefined4 *)(psVar3 + 2) = *(undefined4 *)(psVar12 + 2);
        *(undefined4 *)(psVar3 + 4) = *(undefined4 *)(lVar8 + (long)iVar11 * 0xc + 8);
        if (0x12a < (int)uVar9) break;
        uVar9 = uVar9 + 1;
      }
      iVar11 = iVar11 + 1;
    } while (iVar4 != iVar11);
  }
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(lVar5 + 0x60);
joined_r0x0138bcfc:
  if ((lVar5 != 0) && (*(undefined8 **)(lVar5 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar5 + 0x18))();
  }
  return;
}

