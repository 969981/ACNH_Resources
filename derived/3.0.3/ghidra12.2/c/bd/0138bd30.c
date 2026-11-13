
/* WARNING: Removing unreachable block (ram,0x0138bdcc) */

void FUN_0138bd30(long param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  iVar3 = *(int *)(param_1 + 0x90);
  if (iVar3 < -0x17df00c3) {
    if ((iVar3 != -0x7975b8e8) && (iVar3 != -0x3e092032)) goto LAB_0138be28;
  }
  else {
    if (iVar3 == -0x17df00c3) {
      return;
    }
    if (iVar3 == 0x10cdc40c) {
      if (DAT_05574040 == 0) {
        return;
      }
      local_48 = CONCAT44(local_48._4_4_,1);
      if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
        return;
      }
      lVar6 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
      if (lVar6 == 0) {
        return;
      }
      lVar9 = *(long *)(&LAB_005d3fb0 + lVar6);
      if (lVar9 == 0) {
        uVar7 = 0;
      }
      else {
        if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          lVar9 = *(long *)(&LAB_005d3fb0 + lVar6);
          uVar7 = uVar7 & 0xffffffff;
          if (lVar9 == 0) goto LAB_0138c044;
        }
        plVar8 = *(long **)(lVar9 + 0x20);
        if (plVar8 != (long *)0x0) {
          local_48 = *(long *)(&LAB_005d3f90 + lVar6);
          local_40 = *(undefined8 *)(&LAB_005d3f98 + lVar6);
          local_38 = 0x708;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
        }
      }
LAB_0138c044:
      puVar1 = (undefined4 *)(*(long *)(&LAB_005d3f98 + lVar6) + *(long *)(&LAB_005d3f90 + lVar6));
      memset(puVar1,0,0x708);
      lVar9 = 0;
      do {
        puVar2 = (undefined4 *)((long)puVar1 + lVar9);
        lVar9 = lVar9 + 0x18;
        *(undefined1 *)(puVar2 + 1) = 0;
        *puVar2 = 0;
        *(undefined4 *)((long)puVar2 + 6) = 0;
        *(undefined1 *)((long)puVar2 + 10) = 0;
        puVar2[3] = 0;
        *(undefined1 *)(puVar2 + 4) = 0;
        *(undefined4 *)((long)puVar2 + 0x12) = 0;
        *(undefined1 *)((long)puVar2 + 0x16) = 0;
      } while (lVar9 != 0x708);
      iVar3 = *param_2;
      if (iVar3 != 0) {
        lVar9 = *(long *)(param_2 + 2);
        uVar10 = 0;
        iVar11 = 0;
        sVar5 = *(short *)PTR_DAT_04bbc1c0;
        do {
          psVar12 = (short *)(lVar9 + (long)iVar11 * 6);
          if (*psVar12 != sVar5) {
            uVar4 = *(undefined4 *)psVar12;
            puVar2 = (undefined4 *)((long)puVar1 + (ulong)uVar10 * 6);
            if (299 < uVar10) {
              puVar2 = puVar1;
            }
            *(char *)(puVar2 + 1) = (char)psVar12[2];
            *puVar2 = uVar4;
            if (0x12a < (int)uVar10) break;
            uVar10 = uVar10 + 1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar3 != iVar11);
      }
      if ((uVar7 & 1) == 0) {
        return;
      }
      lVar6 = *(long *)(&LAB_005d3fb0 + lVar6);
      goto joined_r0x0138c110;
    }
LAB_0138be28:
    if (((DAT_05ac0a90 != iVar3) &&
        ((((DAT_05ac0aa0 != iVar3 && (DAT_05ac0ab0 != iVar3)) && (DAT_05ac0ac0 != iVar3)) &&
         ((DAT_05ac0ad0 != iVar3 && (DAT_05ac0ae0 != iVar3)))))) &&
       ((DAT_05ac0af0 != iVar3 &&
        (((DAT_05ac0b00 != iVar3 && (DAT_05ac0b10 != iVar3)) && (DAT_05ac0b20 != iVar3)))))) {
      return;
    }
  }
  lVar6 = FUN_03776f00();
  if (lVar6 == 0) {
    return;
  }
  lVar9 = *(long *)(lVar6 + 0xd0);
  if (lVar9 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
      plVar8 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar7 = uVar7 & 0xffffffff;
      if (*(long *)(lVar6 + 0xd0) == 0) goto LAB_0138bf1c;
      plVar8 = *(long **)(*(long *)(lVar6 + 0xd0) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_48 = *(long *)(lVar6 + 0xb0);
      local_40 = *(undefined8 *)(lVar6 + 0xb8);
      local_38 = 0x708;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
    }
  }
LAB_0138bf1c:
  puVar1 = (undefined4 *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
  memset(puVar1,0,0x708);
  lVar9 = 0;
  do {
    puVar2 = (undefined4 *)((long)puVar1 + lVar9);
    lVar9 = lVar9 + 0x18;
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    *(undefined4 *)((long)puVar2 + 6) = 0;
    *(undefined1 *)((long)puVar2 + 10) = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    *(undefined4 *)((long)puVar2 + 0x12) = 0;
    *(undefined1 *)((long)puVar2 + 0x16) = 0;
  } while (lVar9 != 0x708);
  iVar3 = *param_2;
  if (iVar3 != 0) {
    lVar9 = *(long *)(param_2 + 2);
    uVar10 = 0;
    iVar11 = 0;
    sVar5 = *(short *)PTR_DAT_04bbc1c0;
    do {
      psVar12 = (short *)(lVar9 + (long)iVar11 * 6);
      if (*psVar12 != sVar5) {
        uVar4 = *(undefined4 *)psVar12;
        puVar2 = (undefined4 *)((long)puVar1 + (ulong)uVar10 * 6);
        if (299 < uVar10) {
          puVar2 = puVar1;
        }
        *(char *)(puVar2 + 1) = (char)psVar12[2];
        *puVar2 = uVar4;
        if (0x12a < (int)uVar10) break;
        uVar10 = uVar10 + 1;
      }
      iVar11 = iVar11 + 1;
    } while (iVar3 != iVar11);
  }
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar6 = *(long *)(lVar6 + 0xd0);
joined_r0x0138c110:
  if ((lVar6 != 0) && (*(undefined8 **)(lVar6 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar6 + 0x18))();
  }
  return;
}

