
void FUN_002d54ec(undefined8 param_1,long param_2,int *param_3)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined **local_c0;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  ErrorResultVariant aEStack_94 [68];
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    local_98 = 0x10c07;
    goto LAB_002d58f8;
  }
  if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
    if (DAT_04c60f48 != 0) {
      bVar2 = FUN_0029d9f8();
      if ((1 < bVar2) && (uVar5 = FUN_0029d9e0(DAT_04c60f48), (uVar5 & 1) != 0)) {
        iVar3 = FUN_0029d9f8(DAT_04c60f48);
        puVar1 = PTR_DAT_04bcb8d8;
        if (*(long **)(param_2 + 0x60) == (long *)0x0) {
LAB_002d55ac:
          iVar4 = 0;
        }
        else {
          lVar6 = (**(code **)(**(long **)(param_2 + 0x60) + 0x18))();
          lVar7 = FUN_002bf8c0(*(undefined8 *)puVar1);
          if (lVar6 == lVar7) goto LAB_002d55ac;
          plVar10 = *(long **)(param_2 + 0x128);
          plVar8 = (long *)FUN_00187df4(0x18);
          plVar8[1] = (long)plVar10;
          plVar8[2] = lVar6;
          *plVar8 = 0;
          lVar6 = *plVar10;
          *plVar8 = lVar6;
          *(long **)(lVar6 + 8) = plVar8;
          *plVar10 = (long)plVar8;
          plVar10[2] = plVar10[2] + 1;
          iVar4 = 1;
        }
        if (*(long **)(param_2 + 0x68) != (long *)0x0) {
          lVar6 = (**(code **)(**(long **)(param_2 + 0x68) + 0x18))();
          lVar7 = FUN_002bf8c0(*(undefined8 *)puVar1);
          if (lVar6 != lVar7) {
            plVar10 = *(long **)(param_2 + 0x128);
            plVar8 = (long *)FUN_00187df4(0x18);
            plVar8[1] = (long)plVar10;
            plVar8[2] = lVar6;
            iVar4 = iVar4 + 1;
            *plVar8 = 0;
            lVar6 = *plVar10;
            *plVar8 = lVar6;
            *(long **)(lVar6 + 8) = plVar8;
            *plVar10 = (long)plVar8;
            plVar10[2] = plVar10[2] + 1;
          }
        }
        if (*(long **)(param_2 + 0x70) != (long *)0x0) {
          lVar6 = (**(code **)(**(long **)(param_2 + 0x70) + 0x18))();
          lVar7 = FUN_002bf8c0(*(undefined8 *)puVar1);
          if (lVar6 != lVar7) {
            plVar10 = *(long **)(param_2 + 0x128);
            plVar8 = (long *)FUN_00187df4(0x18);
            plVar8[1] = (long)plVar10;
            plVar8[2] = lVar6;
            iVar4 = iVar4 + 1;
            *plVar8 = 0;
            lVar6 = *plVar10;
            *plVar8 = lVar6;
            *(long **)(lVar6 + 8) = plVar8;
            *plVar10 = (long)plVar8;
            plVar10[2] = plVar10[2] + 1;
          }
        }
        if (*(long **)(param_2 + 0x78) != (long *)0x0) {
          lVar6 = (**(code **)(**(long **)(param_2 + 0x78) + 0x18))();
          lVar7 = FUN_002bf8c0(*(undefined8 *)puVar1);
          if (lVar6 != lVar7) {
            plVar10 = *(long **)(param_2 + 0x128);
            plVar8 = (long *)FUN_00187df4(0x18);
            plVar8[1] = (long)plVar10;
            plVar8[2] = lVar6;
            iVar4 = iVar4 + 1;
            *plVar8 = 0;
            lVar6 = *plVar10;
            *plVar8 = lVar6;
            *(long **)(lVar6 + 8) = plVar8;
            *plVar10 = (long)plVar8;
            plVar10[2] = plVar10[2] + 1;
          }
        }
        lVar6 = *(long *)(param_2 + 0xb8) + 0x160;
        if (lVar6 != *(long *)(param_2 + 0x128)) {
          FUN_002e7620(lVar6,*(undefined8 *)(*(long *)(param_2 + 0x128) + 8));
        }
        if (iVar4 == 0) {
          *(ushort *)(*(long *)(param_2 + 0xb8) + 0x1a8) = (ushort)(iVar3 - iVar4) & 0xff;
        }
        iVar3 = nn::util::SNPrintf((char *)&local_98,0x47,"%d",(ulong)(iVar3 - iVar4 & 0xff));
        if (*(long **)(param_2 + 0x60) == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (**(code **)(**(long **)(param_2 + 0x60) + 0x18))();
        }
        aEStack_94[(long)iVar3 + -4] = (ErrorResultVariant)0x20;
        iVar4 = nn::util::SNPrintf((char *)(aEStack_94 + (long)iVar3 + -3),(long)(0x46 - iVar3),
                                   "%016llx",uVar9);
        lVar6 = (long)iVar4 + (long)(iVar3 + 1);
        if (*(long **)(param_2 + 0x68) == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (**(code **)(**(long **)(param_2 + 0x68) + 0x18))();
        }
        aEStack_94[lVar6 + -4] = (ErrorResultVariant)0x20;
        iVar3 = nn::util::SNPrintf((char *)(aEStack_94 + lVar6 + -3),(long)(0x46 - (int)lVar6),
                                   "%016llx",uVar9);
        lVar6 = (long)iVar3 + (long)((int)lVar6 + 1);
        if (*(long **)(param_2 + 0x70) == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (**(code **)(**(long **)(param_2 + 0x70) + 0x18))();
        }
        aEStack_94[lVar6 + -4] = (ErrorResultVariant)0x20;
        iVar3 = nn::util::SNPrintf((char *)(aEStack_94 + lVar6 + -3),(long)(0x46 - (int)lVar6),
                                   "%016llx",uVar9);
        lVar6 = (long)iVar3 + (long)((int)lVar6 + 1);
        if (*(long **)(param_2 + 0x78) == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (**(code **)(**(long **)(param_2 + 0x78) + 0x18))();
        }
        aEStack_94[lVar6 + -4] = (ErrorResultVariant)0x20;
        iVar3 = nn::util::SNPrintf((char *)(aEStack_94 + lVar6 + -3),(long)(0x46 - (int)lVar6),
                                   "%016llx",uVar9);
        iVar3 = iVar3 + (int)lVar6 + 1;
        if (0x46 < iVar3) {
          iVar3 = 0x47;
        }
        aEStack_94[(long)iVar3 + -4] = (ErrorResultVariant)0x0;
        lVar6 = *(long *)(param_2 + 0xb8);
        local_b8[0] = 0;
        local_a8 = local_b8;
        local_c0 = &PTR_LAB_04a426b8;
        uStack_a0 = 0x10;
        FUN_0018b070(&local_c0,&local_98,0xffffffffffffffff);
        FUN_00189504(lVar6 + 0x180,&local_c0);
        local_c0 = &PTR_LAB_04a426b8;
        FUN_0018b1a0(&local_c0);
      }
      if (*(int *)(param_2 + 0x154) == 1) goto LAB_002d58ec;
    }
    uVar5 = FUN_0030f804(*(undefined8 *)(param_2 + 0x58),param_2 + 0x140,
                         *(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(param_2 + 0xa8));
    if ((uVar5 & 1) == 0) {
      local_98 = 0xac5a;
    }
    else {
      *(int **)(param_2 + 0x2c0) = param_3;
      FUN_00220f78(param_3);
      *(undefined4 *)(param_2 + 0x550) = 0;
      *(undefined2 *)(param_2 + 0x554) = 0x100;
      *(undefined4 *)(param_2 + 0x558) = 0;
      *(undefined8 *)(param_2 + 0x560) = 0;
      (**(code **)(**(long **)(param_2 + 0xa0) + 0x40))();
      local_98 = 0;
    }
  }
  else {
LAB_002d58ec:
    local_98 = 0x10c08;
  }
LAB_002d58f8:
  local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_94,(Result *)&local_c0);
  FUN_002296c4(param_1,&local_98);
  return;
}

