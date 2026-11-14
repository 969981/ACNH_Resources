
uint FUN_01b4316c(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined4 uVar14;
  void *pvVar15;
  uint uVar16;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (DAT_05574040 == 0) {
LAB_01b43228:
    uVar3 = 0;
    goto LAB_01b4322c;
  }
  puVar12 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar5 = (**(code **)(*(long *)*puVar12 + 0x38))();
    if (lVar5 == 0) goto LAB_01b43228;
    lVar5 = lVar5 + 0x70;
  }
  else if (((puVar12 == (undefined8 *)0x0) || ((long *)puVar12[0x26] == (long *)0x0)) ||
          (lVar5 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar5 == 0)) goto LAB_01b43228;
  plVar9 = (long *)(lVar5 + 0xe7270);
  if ((*(long **)(lVar5 + 0xe7290) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar5 + 0xe7290), puVar12 == (undefined8 *)0x0)) {
    uVar6 = 0;
    if (DAT_05574040 != 0) goto LAB_01b4325c;
LAB_01b432ac:
    uVar3 = 0;
  }
  else {
    uVar6 = (**(code **)*puVar12)();
    uVar6 = uVar6 & 0xffffffff;
    if (DAT_05574040 == 0) goto LAB_01b432ac;
LAB_01b4325c:
    lVar7 = FUN_026eec4c(DAT_05574040,*(undefined4 *)(param_1 + 8));
    if (lVar7 == 0) goto LAB_01b432ac;
    lVar13 = lVar7 + 0x194b0;
    if (*(long *)(lVar7 + 0x194b8) == 0) {
      lVar13 = *(long *)(DAT_05574040 + 0x20);
    }
    plVar1 = (long *)(lVar13 + 0x8508);
    if ((*(long *)(lVar13 + 0x8528) == 0) ||
       (puVar12 = *(undefined8 **)(*(long *)(lVar13 + 0x8528) + 0x10), puVar12 == (undefined8 *)0x0)
       ) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)*puVar12)();
      uVar8 = uVar8 & 0xffffffff;
    }
    uVar3 = 0;
    switch(*(undefined4 *)(param_1 + 0x20)) {
    case 0:
      if ((*(long *)(lVar13 + 0x8528) != 0) &&
         (plVar10 = *(long **)(*(long *)(lVar13 + 0x8528) + 0x20), plVar10 != (long *)0x0)) {
        local_78 = *plVar1;
        local_70 = *(undefined8 *)(lVar13 + 0x8510);
        uStack_68 = 0xeab4;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
      }
      uVar16 = *(uint *)(param_1 + 0x24);
      uVar3 = 0;
      if ((0x1d < uVar16) || (lVar7 = *(long *)(lVar13 + 0x8510) + *plVar1, lVar7 == 0)) break;
      pvVar15 = (void *)(lVar7 + (ulong)uVar16 * 0x2b8);
      uVar11 = FUN_02828794(pvVar15);
      if ((uVar11 & 1) == 0) {
LAB_01b436cc:
        uVar16 = 0;
        uVar3 = 0;
      }
      else {
        lVar7 = lVar7 + (ulong)uVar16 * 0x2b8;
        FUN_02828240(pvVar15,param_2,lVar7 + 0x2b4,*(long *)(lVar5 + 0xe7278) + *plVar9,param_4);
        uVar16 = 1;
        uVar3 = 1;
        *param_3 = 1;
        memset(pvVar15,0,0x2b8);
        *(undefined2 *)((long)pvVar15 + 4) = 0xfffe;
        *(undefined1 *)((long)pvVar15 + 7) = 0;
        FUN_0277d4ac((undefined2 *)((long)pvVar15 + 4));
        memset((void *)((long)pvVar15 + 0xc),0,0x2a5);
        *(undefined2 *)(lVar7 + 0x2b4) = 0x23;
        *(undefined1 *)(lVar7 + 0x2b6) = 8;
      }
      if ((uVar8 & 1) == 0) goto LAB_01b4379c;
      goto LAB_01b43780;
    case 1:
      if ((*(long *)(lVar13 + 0x8528) != 0) &&
         (plVar9 = *(long **)(*(long *)(lVar13 + 0x8528) + 0x20), plVar9 != (long *)0x0)) {
        local_78 = *plVar1;
        local_70 = *(undefined8 *)(lVar13 + 0x8510);
        uStack_68 = 0xeab4;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
      }
      uVar3 = *(uint *)(param_1 + 0x24);
      lVar7 = *(long *)(lVar13 + 0x8510) + *plVar1 + 0x5190;
      pvVar15 = (void *)(lVar7 + (ulong)uVar3 * 0x2b8);
      if (uVar3 < 0x18) {
        uVar11 = FUN_02828b58();
        if ((uVar11 & 1) == 0) goto LAB_01b436cc;
        lVar7 = lVar7 + (ulong)uVar3 * 0x2b8;
        bVar2 = *(byte *)(lVar7 + 0x2b4);
        if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&DAT_04f292d0), iVar4 != 0)) {
          FUN_00dd5f80(&DAT_04f292c0);
          __cxa_guard_release(&DAT_04f292d0);
        }
        if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
          uVar11 = 0;
          do {
            if (*(uint *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar11 * 4) == (uint)bVar2)
            goto LAB_01b43498;
            uVar11 = uVar11 + 1;
          } while (*(uint *)PTR_DAT_04bb8aa0 != uVar11);
        }
        uVar11 = 0;
LAB_01b43498:
        local_78 = CONCAT44(local_78._4_4_,(int)uVar11);
        FUN_028285c8(pvVar15,param_2,&local_78,param_4);
        *param_3 = 0;
        memset(pvVar15,0,0x2b8);
        *(undefined2 *)((long)pvVar15 + 4) = 0xfffe;
        *(undefined1 *)((long)pvVar15 + 7) = 0;
        FUN_0277d4ac((undefined2 *)((long)pvVar15 + 4));
        memset((void *)((long)pvVar15 + 0xc),0,0x2a5);
        *(undefined1 *)(lVar7 + 0x2b4) = 0;
        uVar3 = 1;
      }
      else {
LAB_01b436c0:
        uVar3 = 0;
      }
      goto joined_r0x01b434f4;
    case 2:
      if ((*(long *)(lVar13 + 0x8528) != 0) &&
         (plVar10 = *(long **)(*(long *)(lVar13 + 0x8528) + 0x20), plVar10 != (long *)0x0)) {
        local_78 = *plVar1;
        local_70 = *(undefined8 *)(lVar13 + 0x8510);
        uStack_68 = 0xeab4;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
      }
      uVar3 = *(uint *)(param_1 + 0x24);
      if (7 < uVar3) goto LAB_01b436c0;
      lVar7 = *(long *)(lVar13 + 0x8510) + *plVar1 + 0x92d0;
      pvVar15 = (void *)(lVar7 + (ulong)uVar3 * 700);
      uVar11 = FUN_02828f30(pvVar15);
      if ((uVar11 & 1) != 0) {
        FUN_028296e0(pvVar15,param_2,param_3,param_4,*(long *)(lVar5 + 0xe7278) + *plVar9);
        memset(pvVar15,0,700);
        *(undefined2 *)((long)pvVar15 + 4) = 0xfffe;
        *(undefined1 *)((long)pvVar15 + 7) = 0;
        FUN_0277d4ac((undefined2 *)((long)pvVar15 + 4));
        memset((void *)((long)pvVar15 + 0xc),0,0x2a5);
        lVar7 = lVar7 + (ulong)uVar3 * 700;
        uVar14 = 0x230001;
        goto LAB_01b43760;
      }
LAB_01b43774:
      uVar3 = 0;
      break;
    case 3:
      if ((*(long *)(lVar13 + 0x8528) != 0) &&
         (plVar9 = *(long **)(*(long *)(lVar13 + 0x8528) + 0x20), plVar9 != (long *)0x0)) {
        local_78 = *plVar1;
        local_70 = *(undefined8 *)(lVar13 + 0x8510);
        uStack_68 = 0xeab4;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
      }
      if (4 < *(uint *)(param_1 + 0x24)) goto LAB_01b436c0;
      puVar12 = (undefined8 *)
                (*(long *)(lVar13 + 0x8510) + *plVar1 + 0xa8b0 +
                (ulong)*(uint *)(param_1 + 0x24) * 0x10);
      uVar11 = FUN_028297ec(puVar12);
      if ((uVar11 & 1) == 0) goto LAB_01b43774;
      uVar3 = FUN_02829950(puVar12,param_2,param_4,param_5);
      *param_3 = 0;
      *puVar12 = 0;
      puVar12[1] = 0;
      *(undefined2 *)((long)puVar12 + 4) = 0xfffe;
      *(undefined1 *)((long)puVar12 + 7) = 0;
      FUN_0277d4ac((undefined2 *)((long)puVar12 + 4));
      *(undefined4 *)((long)puVar12 + 0xc) = 0;
      break;
    case 5:
      if ((*(long *)(lVar13 + 0x8528) != 0) &&
         (plVar10 = *(long **)(*(long *)(lVar13 + 0x8528) + 0x20), plVar10 != (long *)0x0)) {
        local_78 = *plVar1;
        local_70 = *(undefined8 *)(lVar13 + 0x8510);
        uStack_68 = 0xeab4;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
      }
      uVar3 = *(uint *)(param_1 + 0x24);
      if (7 < uVar3) goto LAB_01b436c0;
      lVar7 = *(long *)(lVar13 + 0x8510) + *plVar1 + 0xb79c;
      pvVar15 = (void *)(lVar7 + (ulong)uVar3 * 700);
      uVar11 = FUN_0282a5c0(pvVar15);
      if ((uVar11 & 1) == 0) goto LAB_01b43774;
      FUN_0282b030(pvVar15,param_2,param_3,param_4,*(long *)(lVar5 + 0xe7278) + *plVar9);
      memset(pvVar15,0,700);
      *(undefined2 *)((long)pvVar15 + 4) = 0xfffe;
      *(undefined1 *)((long)pvVar15 + 7) = 0;
      FUN_0277d4ac((undefined2 *)((long)pvVar15 + 4));
      memset((void *)((long)pvVar15 + 0xc),0,0x2a5);
      lVar7 = lVar7 + (ulong)uVar3 * 700;
      uVar14 = 0x230000;
LAB_01b43760:
      *(undefined4 *)(lVar7 + 0x2b4) = uVar14;
      uVar3 = 1;
      *(undefined2 *)(lVar7 + 0x2b8) = 8;
    }
joined_r0x01b434f4:
    uVar16 = uVar3;
    if ((uVar8 & 1) != 0) {
LAB_01b43780:
      uVar3 = uVar16;
      if ((*(long *)(lVar13 + 0x8528) != 0) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar13 + 0x8528) + 0x18),
         puVar12 != (undefined8 *)0x0)) {
        (**(code **)*puVar12)();
      }
    }
  }
LAB_01b4379c:
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0xe7290) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar5 + 0xe7290) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
LAB_01b4322c:
  return uVar3 & 1;
}

