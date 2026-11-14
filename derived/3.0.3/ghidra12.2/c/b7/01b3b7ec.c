
uint FUN_01b3b7ec(long param_1,undefined1 *param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *__s;
  undefined8 uVar13;
  long lVar14;
  char *pcVar15;
  undefined2 *puVar16;
  undefined **local_668;
  undefined *puStack_660;
  undefined **local_658;
  undefined *puStack_650;
  undefined **local_648;
  char *pcStack_640;
  long local_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined1 *local_618;
  undefined1 *puStack_610;
  undefined1 *local_608;
  undefined1 auStack_5c0 [320];
  undefined1 auStack_480 [704];
  undefined1 auStack_1c0 [320];
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar4 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*(undefined4 *)(param_1 + 8)), lVar4 == 0)) {
    uVar3 = 0;
    goto LAB_01b3b93c;
  }
  lVar9 = *(long *)(lVar4 + 0x18d68);
  if (lVar9 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar4 + 0x18d68) == 0) goto LAB_01b3b8b4;
      plVar6 = *(long **)(*(long *)(lVar4 + 0x18d68) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_638 = *(long *)(lVar4 + 0x18d48);
      local_630 = *(undefined8 *)(lVar4 + 0x18d50);
      uStack_628 = 0x1180;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_638);
    }
  }
LAB_01b3b8b4:
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar3 = 0;
  if ((uVar1 < 8) && (lVar9 = *(long *)(lVar4 + 0x18d50) + *(long *)(lVar4 + 0x18d48), lVar9 != 0))
  {
    __s = (char *)(lVar9 + (ulong)uVar1 * 0x230);
    if ((*__s == '\0') ||
       ((lVar10 = lVar9 + (ulong)uVar1 * 0x230,
        *(int *)(lVar10 + 0x200) == 0 || *(int *)(lVar10 + 0x1e4) == 0 ||
        (lVar14 = lVar9 + (ulong)uVar1 * 0x230, pcVar15 = (char *)(lVar14 + 2),
        *(char *)(lVar14 + 1) == '\0' || *pcVar15 != '\0')))) {
      uVar3 = 0;
    }
    else {
      memset(param_2,0,0x3c8);
      puVar16 = (undefined2 *)(param_2 + 0xc0);
      *puVar16 = 0xfffe;
      FUN_0277d4ac(puVar16);
      memset(param_2,0,0x3b4);
      *puVar16 = 0xfffe;
      FUN_0277d4ac(puVar16);
      param_2[200] = 0;
      param_2[0xcc] = 0;
      memset(param_2 + 0xce,0,0x2a2);
      *(undefined2 *)(param_2 + 0x370) = 0xfffe;
      param_2[0x5c] = 0;
      *param_2 = 1;
      uVar11 = *(undefined8 *)(lVar10 + 0x1e4);
      uVar12 = *(undefined8 *)(lVar10 + 0x1ec);
      uVar2 = *(undefined1 *)(lVar10 + 0x1fc);
      *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(lVar10 + 500);
      param_2[0x1c] = uVar2;
      *(undefined8 *)(param_2 + 0xc) = uVar12;
      *(undefined8 *)(param_2 + 4) = uVar11;
      lVar14 = lVar9 + (ulong)uVar1 * 0x230;
      uVar11 = *(undefined8 *)(lVar10 + 0x208);
      uVar12 = *(undefined8 *)(lVar10 + 0x210);
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(lVar10 + 0x200);
      *(undefined8 *)(param_2 + 0x28) = uVar11;
      *(undefined8 *)(param_2 + 0x30) = uVar12;
      uVar3 = *(uint *)(lVar14 + 0x218);
      param_2[0xb8] = 0;
      if (1 < uVar3) {
        uVar3 = 0;
      }
      *(uint *)(param_2 + 0x38) = uVar3;
      uVar11 = param_3[1];
      uVar12 = param_3[2];
      uVar13 = *param_3;
      param_2[0x78] = *(undefined1 *)(param_3 + 3);
      *(undefined8 *)(param_2 + 0x68) = uVar11;
      *(undefined8 *)(param_2 + 0x70) = uVar12;
      *(undefined8 *)(param_2 + 0x60) = uVar13;
      uVar11 = *(undefined8 *)((long)param_3 + 0x2c);
      uVar12 = *(undefined8 *)((long)param_3 + 0x24);
      *(undefined8 *)(param_2 + 0x7c) = *(undefined8 *)((long)param_3 + 0x1c);
      *(undefined8 *)(param_2 + 0x84) = uVar12;
      *(undefined8 *)(param_2 + 0x8c) = uVar11;
      uVar3 = *(uint *)((long)param_3 + 0x34);
      param_2[0xcc] = 1;
      if (1 < uVar3) {
        uVar3 = 0;
      }
      *(uint *)(param_2 + 0x94) = uVar3;
      *(undefined2 *)(param_2 + 0x36e) = 0x19b;
      FUN_01bdde78(&local_638);
      local_70 = param_2 + 0x30e;
      local_618 = auStack_5c0;
      puStack_610 = auStack_480;
      local_608 = auStack_1c0;
      local_648 = &PTR_LAB_048f9770;
      pcStack_640 = "BirthdayMessage";
      local_658 = &PTR_LAB_048f9770;
      puStack_650 = &DAT_040d42fe;
      local_668 = &PTR_LAB_048f9770;
      puStack_660 = &DAT_04091fb1;
      local_80 = param_2 + 0xce;
      local_78 = param_2 + 0x12e;
      uVar3 = FUN_01bdc520(&local_638,&local_648,&local_658,&local_668,
                           (undefined8 *)(lVar10 + 0x1e4),param_3);
      memcpy(param_2 + 0x12e,(void *)(lVar14 + 4),0x1e0);
      uVar11 = FUN_0272eca4(param_1 + 0xc,1);
      uVar8 = nn::time::IsValidDate
                        ((uint)uVar11 & 0xffff,(uint)uVar11 >> 0x10 & 0xff,
                         (uint)((ulong)uVar11 >> 0x18) & 0xff);
      if ((uVar8 & 1) != 0) {
        *(short *)(param_2 + 0xbc) = (short)uVar11;
        param_2[0xbe] = (char)((ulong)uVar11 >> 0x10);
        param_2[0xbf] = (char)((ulong)uVar11 >> 0x18);
      }
      lVar14 = lVar9 + (ulong)uVar1 * 0x230;
      *(undefined8 *)(param_2 + 0x380) = *(undefined8 *)(lVar14 + 0x220);
      *(undefined8 *)(param_2 + 0x388) = *(undefined8 *)(lVar14 + 0x228);
      *pcVar15 = '\x01';
      if ((*(int *)(param_4 + 8) == 1) && (*(long *)(param_4 + 0x10) != 0)) {
        lVar9 = lVar9 + (ulong)uVar1 * 0x230;
        memset(__s,0,0x230);
        *(undefined8 *)(lVar9 + 0x1e8) = 0;
        *(undefined8 *)(lVar9 + 0x1f0) = 0;
        *(undefined1 *)(lVar9 + 0x1fc) = 2;
        *(undefined4 *)(lVar9 + 0x1f8) = 0;
        *(undefined8 *)(lVar14 + 0x220) = 0;
        *(undefined8 *)(lVar14 + 0x228) = 0;
        *(undefined4 *)(lVar10 + 0x218) = 0;
        *(undefined8 *)(lVar10 + 0x200) = 0;
        *(undefined8 *)(lVar10 + 0x208) = 0;
        *(undefined8 *)(lVar10 + 0x210) = 0;
      }
    }
  }
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar4 + 0x18d68) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0x18d68) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
LAB_01b3b93c:
  return uVar3 & 1;
}

