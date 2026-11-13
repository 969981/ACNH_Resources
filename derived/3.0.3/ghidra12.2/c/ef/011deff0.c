
void FUN_011deff0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  char local_58;
  char local_57;
  long *local_50;
  char local_48;
  char local_47;
  
  local_60 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071c8d0(&local_50,&DAT_050dfb2c,&local_60,0);
  plVar4 = local_50;
  puVar5 = PTR_DAT_04bbbb50;
  if (local_50 != (long *)0x0) {
    if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb50);
    }
    uVar7 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bbbb48);
    if ((uVar7 & 1) == 0) {
      local_47 = '\0';
    }
  }
  local_64 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071c8d0(&local_60,&DAT_050dfb30,&local_64,0);
  plVar4 = (long *)CONCAT44(uStack_5c,local_60);
  if (plVar4 != (long *)0x0) {
    if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb50);
    }
    uVar7 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bbbb48);
    if ((uVar7 & 1) == 0) {
      local_57 = '\0';
    }
  }
  if ((((local_50 != (long *)0x0) && (local_48 != '\0')) && (local_47 != '\0')) &&
     (((lVar8 = CONCAT44(uStack_5c,local_60), lVar8 != 0 && (local_58 != '\0')) &&
      (local_57 != '\0')))) {
    uVar9 = *(uint *)(local_50 + 0x8cf2);
    uVar7 = (ulong)uVar9;
    if (0 < (int)uVar9) {
      plVar4 = local_50 + 0x4f;
      uVar12 = 0;
      plVar13 = plVar4;
      do {
        plVar2 = plVar13;
        if (999 < uVar12) {
          plVar2 = plVar4;
        }
        if (*(int *)((long)plVar2 + 0xfc) != 4) {
          uVar9 = (uint)plVar2[0x21];
          if ((((uVar9 >> 0x13 & 1) != 0) &&
              (plVar2[0x21] = plVar2[0x21] & 0xfffffffffff7ffff, *(int *)((long)plVar2 + 0xfc) == 2)
              ) && ((uVar9 >> 0x1c & 1) == 0)) {
            FUN_011cf0c0(plVar2,plVar4,uVar7,1,0);
          }
        }
        uVar7 = (ulong)(int)*(uint *)(local_50 + 0x8cf2);
        uVar12 = uVar12 + 1;
        plVar13 = plVar13 + 0x24;
      } while ((long)uVar12 < (long)uVar7);
      lVar8 = CONCAT44(uStack_5c,local_60);
    }
    uVar9 = *(uint *)(lVar8 + 0x46790);
    uVar7 = (ulong)uVar9;
    if (0 < (int)uVar9) {
      lVar1 = lVar8 + 0x278;
      uVar12 = 0;
      lVar14 = lVar1;
      do {
        lVar3 = lVar14;
        if (999 < uVar12) {
          lVar3 = lVar1;
        }
        if (*(int *)(lVar3 + 0xfc) != 4) {
          uVar9 = (uint)*(ulong *)(lVar3 + 0x108);
          if ((((uVar9 >> 0x13 & 1) != 0) &&
              (*(ulong *)(lVar3 + 0x108) = *(ulong *)(lVar3 + 0x108) & 0xfffffffffff7ffff,
              *(int *)(lVar3 + 0xfc) == 2)) && ((uVar9 >> 0x1c & 1) == 0)) {
            FUN_011cf0c0(lVar3,lVar1,uVar7,1,0);
          }
        }
        uVar7 = (ulong)(int)*(uint *)(lVar8 + 0x46790);
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 0x120;
      } while ((long)uVar12 < (long)uVar7);
    }
    *(undefined2 *)(param_1 + 0x24f84) = 0;
    DAT_05146e1c = 0;
    DAT_050dfb34 = DAT_050dfb34 & 0xffdf;
    iVar6 = *(int *)(param_1 + 0x24f78);
    if (0 < iVar6) {
      iVar10 = 0;
      puVar11 = (ushort *)(param_1 + 0x2e0);
      do {
        if ((*puVar11 >> 3 & 1) != 0) {
          *puVar11 = *puVar11 & 0xdfff;
          iVar6 = *(int *)(param_1 + 0x24f78);
        }
        iVar10 = iVar10 + 1;
        puVar11 = puVar11 + 0x3c;
      } while (iVar10 < iVar6);
    }
  }
  return;
}

