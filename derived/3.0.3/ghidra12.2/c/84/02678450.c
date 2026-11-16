
uint FUN_02678450(byte *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined2 *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  byte local_44 [4];
  
  if ((*param_1 < 8) &&
     ((((uVar4 = FUN_02582d8c(param_1,1), uVar4 < 8 &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) ||
      (((*param_1 < 8 && (uVar4 = FUN_02582d8c(param_1,1), uVar4 < 8)) &&
       ((lVar6 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar6 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0' &&
        ((*(char *)(lVar6 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0' &&
         (*(int *)(lVar6 + (ulong)uVar4 * 0x13f0 + 0x13d0) == 1)))))))))) {
    local_44[0] = *param_1;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    lVar6 = FUN_02583354(DAT_055021a0,local_44,1);
    if (lVar6 != 0) {
      if ((*(long **)(lVar6 + 0x1aa0) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x1aa0), puVar7 == (undefined8 *)0x0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)*puVar7)();
        uVar8 = uVar8 & 0xffffffff;
      }
      puVar9 = (undefined2 *)FUN_02816430(*(long *)(lVar6 + 0x1a88) + *(long *)(lVar6 + 0x1a80));
      local_80 = *puVar9;
      local_7e = *(undefined1 *)(puVar9 + 1);
      local_7d = *(undefined1 *)((long)puVar9 + 3);
      local_7c = *(undefined4 *)(puVar9 + 2);
      uVar4 = FUN_028169a0(*(long *)(lVar6 + 0x1a88) + *(long *)(lVar6 + 0x1a80));
      puVar2 = PTR_DAT_04bb43c0;
      lVar12 = *(long *)PTR_DAT_04bb43c0;
      uVar5 = FUN_0277d6c4(&local_80);
      lVar13 = *(long *)puVar2;
      if (lVar13 == 0) {
LAB_02678660:
        bVar3 = false;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_02678660;
        bVar3 = uVar4 < 0x28 && uVar4 == param_2;
      }
      uVar5 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar2 == 0) {
LAB_026786b4:
        bVar1 = false;
      }
      else {
        lVar12 = *(long *)(lVar13 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_026786b4;
        bVar1 = uVar4 < 0x28 && uVar4 == param_3;
      }
      lVar12 = lVar6 + 0x194b0;
      if (*(long *)(lVar6 + 0x194b8) == 0) {
        lVar12 = *(long *)(DAT_05574040 + 0x20);
      }
      lVar13 = *(long *)(lVar12 + 0x98);
      if (lVar13 == 0) {
        uVar10 = 0;
      }
      else {
        if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
          lVar13 = *(long *)(lVar12 + 0x98);
          uVar10 = uVar10 & 0xffffffff;
          if (lVar13 == 0) goto LAB_02678738;
        }
        plVar11 = *(long **)(lVar13 + 0x20);
        if (plVar11 != (long *)0x0) {
          local_78 = *(undefined8 *)(lVar12 + 0x78);
          uStack_70 = *(undefined8 *)(lVar12 + 0x80);
          local_68 = 0x17c;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
        }
      }
LAB_02678738:
      uVar4 = FUN_027fd1d8(*(long *)(lVar12 + 0x80) + *(long *)(lVar12 + 0x78),param_2,param_3);
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar12 + 0x98) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar12 + 0x98) + 0x18), puVar7 != (undefined8 *)0x0))
      {
        (**(code **)*puVar7)();
      }
      if ((uVar4 & 1) != 0) {
        if (bVar3) {
          lVar12 = *(long *)(lVar6 + 0x1aa0);
          if (lVar12 == 0) {
            lVar12 = *(long *)(lVar6 + 0x1a80);
            param_2 = param_3;
LAB_0267884c:
            FUN_02816c30(*(long *)(lVar6 + 0x1a88) + lVar12,&local_80,param_2,0);
            goto LAB_026788cc;
          }
          if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
            uVar10 = 0;
LAB_026787f0:
            plVar11 = *(long **)(lVar12 + 0x20);
            if (plVar11 != (long *)0x0) {
              local_78 = *(undefined8 *)(lVar6 + 0x1a80);
              uStack_70 = *(undefined8 *)(lVar6 + 0x1a88);
              local_68 = 0x8b8;
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
            }
          }
          else {
            uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
            lVar12 = *(long *)(lVar6 + 0x1aa0);
            uVar10 = uVar10 & 0xffffffff;
            if (lVar12 != 0) goto LAB_026787f0;
          }
          FUN_02816c30(*(long *)(lVar6 + 0x1a88) + *(long *)(lVar6 + 0x1a80),&local_80,param_3,0);
        }
        else {
          if (!bVar1) goto LAB_026788cc;
          lVar12 = *(long *)(lVar6 + 0x1aa0);
          if (lVar12 == 0) {
            lVar12 = *(long *)(lVar6 + 0x1a80);
            goto LAB_0267884c;
          }
          if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
            uVar10 = 0;
LAB_02678864:
            plVar11 = *(long **)(lVar12 + 0x20);
            if (plVar11 != (long *)0x0) {
              local_78 = *(undefined8 *)(lVar6 + 0x1a80);
              uStack_70 = *(undefined8 *)(lVar6 + 0x1a88);
              local_68 = 0x8b8;
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
            }
          }
          else {
            uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
            lVar12 = *(long *)(lVar6 + 0x1aa0);
            uVar10 = uVar10 & 0xffffffff;
            if (lVar12 != 0) goto LAB_02678864;
          }
          FUN_02816c30(*(long *)(lVar6 + 0x1a88) + *(long *)(lVar6 + 0x1a80),&local_80,param_2,0);
        }
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar6 + 0x1aa0) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x1aa0) + 0x18), puVar7 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar7)();
        }
      }
LAB_026788cc:
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar6 + 0x1aa0) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x1aa0) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
      goto LAB_02678598;
    }
  }
  uVar4 = 0;
LAB_02678598:
  return uVar4 & 1;
}

