
void FUN_0392a360(long param_1,long *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  bool bVar13;
  byte bVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  long *plVar18;
  float fVar19;
  int local_78;
  undefined4 uStack_74;
  long local_70;
  long *plStack_68;
  
  puVar8 = PTR_DAT_04bb2698;
  uVar4 = *(uint *)(param_2 + 1);
  if (0 < (int)uVar4) {
    lVar15 = *(long *)PTR_DAT_04bb2698;
    uVar17 = (ulong)uVar4 * 0xe0;
    if (lVar15 == 0) {
      puVar11 = malloc(uVar17 | 8);
    }
    else {
      plVar9 = (long *)*param_2;
      if (plVar9 == (long *)0x0) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar9 = (long *)(lVar15 + 8);
        if (lVar10 != 0) {
          plVar9 = (long *)(lVar10 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_0392a43c;
      }
      puVar11 = (ulong *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar17 | 8,8);
    }
    if (puVar11 != (ulong *)0x0) {
      *puVar11 = (ulong)uVar4;
      puVar16 = puVar11 + 1;
      do {
        FUN_0390cee0(puVar16);
        puVar16 = puVar16 + 0x1c;
        uVar17 = uVar17 - 0xe0;
      } while (uVar17 != 0);
      *(uint *)(param_1 + 0x2320) = uVar4;
      *(ulong **)(param_1 + 9000) = puVar11 + 1;
    }
  }
LAB_0392a43c:
  uVar4 = *(uint *)(param_2 + 2);
  lVar15 = param_1 + 0x2188;
  FUN_0390a734(lVar15,2,*(undefined4 *)((long)param_2 + 0xc),uVar4,uVar4,uVar4,1,0,0,1);
  iVar5 = *(int *)(param_1 + 0x21c8);
  param_2 = (long *)*param_2;
  uVar6 = *(undefined4 *)(param_1 + 0x21c4);
  lVar10 = *(long *)puVar8;
  if (lVar10 == 0) {
    plVar9 = malloc(0x38);
  }
  else {
    plVar9 = param_2;
    if (param_2 == (long *)0x0) {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar9 = (long *)(lVar10 + 8);
      if (lVar12 != 0) {
        plVar9 = (long *)(lVar12 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_0392a4e0;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x38,8);
  }
LAB_0392a4e0:
  plVar9[6] = 0;
  plVar18 = plVar9 + 1;
  *plVar18 = 0;
  *(undefined2 *)((long)plVar9 + 0x2a) = 0;
  bVar14 = 0;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar9 + 5) = 0;
  *plVar9 = (long)puVar1;
  if (param_2 == (long *)0x0) {
    lVar12 = *(long *)puVar8;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar3 = (undefined8 *)(lVar12 + 8);
    if (lVar10 != 0) {
      puVar3 = (undefined8 *)(lVar10 + 0xa8);
    }
    param_2 = (long *)*puVar3;
    bVar14 = *(byte *)(plVar9 + 5) & 0xfe;
  }
  plVar9[6] = 0;
  *(byte *)(plVar9 + 5) = bVar14;
  *(undefined2 *)((long)plVar9 + 0x2a) = 0;
  *plVar18 = 0;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  if (iVar5 == 0) {
    local_78 = 0;
    *(undefined2 *)((long)plVar9 + 0x2a) = 4;
    local_70 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar9,param_2,iVar5,uVar6,4);
    local_70 = plVar9[3];
    *(undefined2 *)((long)plVar9 + 0x2a) = 4;
    local_78 = 0;
    if (plVar9[4] != 0) {
      local_78 = (int)*plVar18 - *(int *)(plVar9[4] + 0x10);
    }
    if (local_70 != 0) {
      uStack_74 = *(undefined4 *)(local_70 + 0x104);
      goto LAB_0392a5c4;
    }
  }
  uStack_74 = 0;
LAB_0392a5c4:
  *(int *)(param_1 + 0x2308) = local_78;
  *(undefined4 *)(param_1 + 0x230c) = uStack_74;
  *(char **)(param_1 + 0x2218) = "agl::pfx::ColorCorrection";
  *(long *)(param_1 + 0x2310) = local_70;
  *(long **)(param_1 + 0x2318) = plVar9;
  *(int *)(param_1 + 0x2188) = local_78;
  *(undefined4 *)(param_1 + 0x218c) = uStack_74;
  *(long *)(param_1 + 0x2190) = local_70;
  *(long **)(param_1 + 0x2198) = plVar9;
  if ((*(byte *)(param_1 + 0x21d6) >> 1 & 1) == 0) {
    bVar13 = false;
  }
  else {
    bVar13 = 0x11 < *(ushort *)(param_1 + 0x2220) &&
             *(ushort *)(param_1 + 0x2220) - 0x59 < 0xffffffd6;
  }
  plStack_68 = plVar9;
  FUN_038fd3e0(param_1 + 0x21d8,&local_78,param_1 + 0x21b8,0,"agl::pfx::ColorCorrection",bVar13,1);
  fVar19 = (float)uVar4;
  *(undefined8 *)(param_1 + 0x1a30) = 0;
  *(float *)(param_1 + 0x1a38) = fVar19;
  *(float *)(param_1 + 0x1a3c) = fVar19;
  *(float *)(param_1 + 0x1a28) = fVar19;
  *(float *)(param_1 + 0x1a2c) = fVar19;
  *(float *)(param_1 + 0x1a14) = 1.0 - 1.0 / fVar19;
  *(float *)(param_1 + 0x1a18) = 0.5 / fVar19;
  FUN_01560750(param_1 + 0x1a88,lVar15,*(undefined1 *)(param_1 + 0x1b46),
               *(undefined2 *)(param_1 + 0x1b44));
  FUN_01560750(param_1 + 0x1b68,lVar15,*(undefined1 *)(param_1 + 0x1c26),
               *(undefined2 *)(param_1 + 0x1c24));
  FUN_01560750(param_1 + 0x1c48,lVar15,*(undefined1 *)(param_1 + 0x1d06),
               *(undefined2 *)(param_1 + 0x1d04));
  FUN_01560750(param_1 + 0x1d28,lVar15,*(undefined1 *)(param_1 + 0x1de6),
               *(undefined2 *)(param_1 + 0x1de4));
  FUN_01560750(param_1 + 0x1e08,lVar15,*(undefined1 *)(param_1 + 0x1ec6),
               *(undefined2 *)(param_1 + 0x1ec4));
  FUN_01560750(param_1 + 0x1ee8,lVar15,*(undefined1 *)(param_1 + 0x1fa6),
               *(undefined2 *)(param_1 + 0x1fa4));
  FUN_01560750(param_1 + 0x1fc8,lVar15,*(undefined1 *)(param_1 + 0x2086),
               *(undefined2 *)(param_1 + 0x2084));
  FUN_01560750(param_1 + 0x20a8,lVar15,*(undefined1 *)(param_1 + 0x2166),
               *(undefined2 *)(param_1 + 0x2164));
  *(undefined4 *)(param_1 + 0x2228) = *(undefined4 *)(param_1 + 0x2188);
  *(undefined8 *)(param_1 + 0x2250) = *(undefined8 *)(param_1 + 0x21b0);
  *(undefined4 *)(param_1 + 0x222c) = *(undefined4 *)(param_1 + 0x218c);
  *(undefined8 *)(param_1 + 0x2230) = *(undefined8 *)(param_1 + 0x2190);
  *(undefined8 *)(param_1 + 0x2238) = *(undefined8 *)(param_1 + 0x2198);
  *(undefined4 *)(param_1 + 0x2240) = *(undefined4 *)(param_1 + 0x21a0);
  *(undefined4 *)(param_1 + 0x2244) = *(undefined4 *)(param_1 + 0x21a4);
  *(undefined8 *)(param_1 + 0x2248) = *(undefined8 *)(param_1 + 0x21a8);
  *(undefined8 *)(param_1 + 0x226f) = *(undefined8 *)(param_1 + 0x21cf);
  *(undefined8 *)(param_1 + 0x2268) = *(undefined8 *)(param_1 + 0x21c8);
  *(undefined8 *)(param_1 + 0x2260) = *(undefined8 *)(param_1 + 0x21c0);
  *(undefined8 *)(param_1 + 0x2258) = *(undefined8 *)(param_1 + 0x21b8);
  FUN_038fd1e0(param_1 + 0x2278);
  FUN_038fd2f0(param_1 + 0x2278,param_1 + 0x21d8);
  *(undefined8 *)(param_1 + 0x22b8) = *(undefined8 *)(param_1 + 0x2218);
  *(undefined4 *)(param_1 + 0x22c0) = *(undefined4 *)(param_1 + 0x2220);
  puVar2 = (uint *)(param_1 + 0x22fc);
  do {
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar13) {
      *puVar2 = *puVar2 | 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  return;
}

