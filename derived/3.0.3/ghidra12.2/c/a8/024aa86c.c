
void FUN_024aa86c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  
  if ((*(char *)(param_1 + 0x17ac) == '\0') && ((*(uint *)(param_1 + 0xed0) & 1) != 0)) {
    *(int *)(param_1 + 0xb30) = *(int *)(param_1 + 0xb30) + 1;
  }
  if (((((*(int *)(param_1 + 0xb30) < 0x32) && (*(long *)(param_1 + 0x60) != 0)) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x1138), lVar4 != 0)) &&
      ((uVar5 = FUN_03850a90(lVar4,0x2e,0,0), (uVar5 & 1) != 0 &&
       (*(char *)(param_1 + 0x17ac) == '\0')))) && ((*(uint *)(param_1 + 0xed0) & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    lVar4 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar4 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar4,0xb3);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  if (((puVar7[0x227] == 0) ||
      (uVar5 = FUN_03850890(puVar7[0x227],0x20,0,0), puVar2 = PTR_DAT_04bb27c0, (uVar5 & 1) == 0))
     || (lVar4 = *(long *)PTR_DAT_04bb27c0, lVar4 == 0)) goto LAB_024aab58;
  if ((((DAT_05407638._4_4_ == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar4 + 0x1c0) + 8) +
                           ((ulong)(DAT_05407638._4_4_ >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0))
      || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != DAT_05407638._4_4_)) {
    plVar8 = (long *)0x0;
  }
  if ((*(int *)(lVar4 + 0x288) == 1) || (*(int *)(lVar4 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar4 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar6 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar4 + 0x5e8)) goto LAB_024aaafc;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar4 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_024aaafc:
    uVar9 = 0;
  }
  if (plVar8 != (long *)0x0) {
    lVar4 = plVar8[0x2a];
    if (((*PTR_DAT_04bb6e50 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6e50), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb6e48 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6e50);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb6e48);
    uVar1 = 0;
    if ((int)lVar4 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      *(undefined1 *)((long)plVar8 + 0x274) = 1;
    }
  }
LAB_024aab58:
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  if (puVar7[0x227] == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(puVar7 + 0x2d3) >> 1 & 1;
  }
  uVar5 = FUN_0170a6d0(puVar7,uVar9);
  if ((uVar5 & 1) != 0) {
    if (0x31 < *(int *)(param_1 + 0xb30)) {
      if (*(int *)(param_1 + 0x178) == 0) {
        FUN_023752f4(param_1,2,6);
        return;
      }
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
      return;
    }
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    lVar4 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar4 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar4,0xb2);
  }
  return;
}

