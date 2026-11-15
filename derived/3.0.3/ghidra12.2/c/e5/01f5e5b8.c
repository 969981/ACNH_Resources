
undefined8 FUN_01f5e5b8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  char *__dest;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined8 local_28;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
LAB_01f5e724:
    if ((*(int *)(param_1 + 0x77b8) == 1) && (*(int *)(param_1 + 0x77b4) < 3)) goto LAB_01f5e758;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x136e4);
    if ((((uVar8 == 0) ||
         (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                             ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
        ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) != 1 && *(int *)(lVar6 + 0x288) != -1) {
LAB_01f5e67c:
      uVar8 = 0;
      if (plVar7 != (long *)0x0) goto LAB_01f5e690;
      goto LAB_01f5e724;
    }
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_01f5e67c;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
    if (plVar7 == (long *)0x0) goto LAB_01f5e724;
LAB_01f5e690:
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3fe0);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3fd8);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if (((uVar5 & 1) == 0) || (uVar1 == 0)) goto LAB_01f5e724;
    if ((*(int *)(param_1 + 0x1370c) == 4) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x68),
       fVar10 = *(float *)(lVar6 + 0x278) - *(float *)(plVar7[0xd] + 0x278),
       fVar9 = *(float *)(lVar6 + 0x280) - *(float *)(plVar7[0xd] + 0x280),
       fVar9 * fVar9 + fVar10 * fVar10 < 4900.0)) {
      return 0;
    }
  }
  *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x29c) = 0x41f00000;
  if (*(char *)(param_1 + 0x13713) == '\0') {
    local_28 = 0;
    lVar6 = *(long *)(param_1 + 0x10);
    FUN_01e5a930(0x40000000,lVar6,0xd,PTR_DAT_04bb2150,(long)&local_28 + 4,&local_28,
                 PTR_DAT_04bc1600,6);
    __dest = *(char **)(lVar6 + 0x3b8);
    if (__dest != "MaReSighing") {
      iVar3 = 0xb;
      if (*(int *)(lVar6 + 0x3c0) < 0xc) {
        iVar3 = *(int *)(lVar6 + 0x3c0) + -1;
      }
      memcpy(__dest,"MaReSighing",(long)iVar3);
      __dest[iVar3] = '\0';
    }
    *(undefined4 *)(lVar6 + 0x3a0) = 0;
    *(undefined1 *)(lVar6 + 0x410) = 1;
    *(undefined4 *)(param_1 + 0x1370c) = 3;
    return 1;
  }
LAB_01f5e758:
  FUN_01f5e840(param_1);
  return 1;
}

