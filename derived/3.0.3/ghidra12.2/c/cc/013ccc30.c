
long * FUN_013ccc30(undefined8 param_1,undefined4 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  char *__src;
  int iVar10;
  int iVar11;
  char *__dest;
  
  lVar4 = DAT_05ae7600;
  switch(param_2) {
  case 0:
    if (DAT_05ae7600 == 0) {
      plVar9 = malloc(0x1d30);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar4 + 8);
        if (lVar8 != 0) {
          param_3 = (long *)(lVar8 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar9 = (long *)0x0;
          goto LAB_013ccf5c;
        }
      }
      plVar9 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x1d30,8);
    }
LAB_013ccf5c:
    FUN_013c216c(plVar9);
    plVar9[0xaa] = 0x3f80000000000000;
    puVar3 = PTR_DAT_04bbc968;
    *(undefined4 *)((long)plVar9 + 0x1374) = 3;
    puVar2 = PTR_DAT_04bb3238;
    plVar9[0x26d] = 0;
    plVar9[0x272] = 0;
    plVar9[0x273] = 0;
    *plVar9 = (long)(puVar3 + 0x10);
    *(undefined1 *)(plVar9 + 0x26e) = 0;
    uVar1 = *(undefined4 *)puVar2;
    *(undefined8 *)((long)plVar9 + 0x137c) = 0;
    *(undefined8 *)((long)plVar9 + 0x1384) = 0;
    *(undefined4 *)(plVar9 + 0x26f) = uVar1;
    *(undefined4 *)((long)plVar9 + 0x138c) = uVar1;
    *(undefined4 *)(plVar9 + 0x274) = uVar1;
    memset((void *)((long)plVar9 + 0x13a4),0,0x979);
    __dest = (char *)plVar9[0xc];
    plVar9[0x3a4] = 0x3a83126f3f800000;
    *(undefined1 *)(plVar9 + 0x3a5) = 0;
    if (__dest == "FishActionMuseumKeepSeimming") {
      return plVar9;
    }
    iVar10 = (int)plVar9[0xd];
    __src = "FishActionMuseumKeepSeimming";
    iVar11 = iVar10 + -1;
    bVar5 = SBORROW4(iVar10,0x1c);
    bVar6 = iVar10 + -0x1c < 0;
    bVar7 = iVar10 == 0x1c;
    iVar10 = 0x1c;
    goto LAB_013cd434;
  case 1:
    if (DAT_05ae7600 == 0) {
      plVar9 = malloc(0x550);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar4 + 8);
        if (lVar8 != 0) {
          param_3 = (long *)(lVar8 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar9 = (long *)0x0;
          goto LAB_013cd02c;
        }
      }
      plVar9 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x550,8);
    }
LAB_013cd02c:
    FUN_013c216c(plVar9);
    __dest = (char *)plVar9[0xc];
    *plVar9 = (long)&PTR_LAB_04994ab8;
    if (__dest == "FishActionMuseumFloat") {
      return plVar9;
    }
    iVar10 = (int)plVar9[0xd];
    __src = "FishActionMuseumFloat";
    iVar11 = iVar10 + -1;
    bVar5 = SBORROW4(iVar10,0x15);
    bVar6 = iVar10 + -0x15 < 0;
    bVar7 = iVar10 == 0x15;
    iVar10 = 0x15;
    goto LAB_013cd434;
  case 2:
    if (DAT_05ae7600 == 0) {
      plVar9 = malloc(0x590);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar4 + 8);
        if (lVar8 != 0) {
          param_3 = (long *)(lVar8 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar9 = (long *)0x0;
          goto LAB_013cd080;
        }
      }
      plVar9 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x590,8);
    }
LAB_013cd080:
    FUN_013c216c(plVar9);
    plVar9[0xaa] = 0x3f00000000000000;
    plVar9[0xab] = 0x4270000041200000;
    __dest = (char *)plVar9[0xc];
    plVar9[0xac] = (long)&DAT_3f8000003f800000;
    plVar9[0xad] = 0;
    plVar9[0xaf] = 0;
    *(undefined8 *)((long)plVar9 + 0x56e) = 0;
    plVar9[0xb0] = 0;
    *plVar9 = (long)&PTR_LAB_04995158;
    *(undefined4 *)(plVar9 + 0xb1) = 0x40400000;
    if (__dest == "FishActionMuseumRoundsSwimming") {
      return plVar9;
    }
    iVar10 = (int)plVar9[0xd];
    __src = "FishActionMuseumRoundsSwimming";
    iVar11 = iVar10 + -1;
    bVar5 = SBORROW4(iVar10,0x1e);
    bVar6 = iVar10 + -0x1e < 0;
    bVar7 = iVar10 == 0x1e;
    iVar10 = 0x1e;
    goto LAB_013cd434;
  case 3:
    if (DAT_05ae7600 == 0) {
      plVar9 = malloc(0x598);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar4 + 8);
        if (lVar8 != 0) {
          param_3 = (long *)(lVar8 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar9 = (long *)0x0;
          goto LAB_013cd10c;
        }
      }
      plVar9 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x598,8);
    }
LAB_013cd10c:
    FUN_013c216c(plVar9);
    plVar9[0xaa] = 0x3f00000000000000;
    *(undefined1 *)(plVar9 + 0xab) = 0xff;
    __dest = (char *)plVar9[0xc];
    plVar9[0xad] = 0x1e0000001e;
    *(undefined4 *)((long)plVar9 + 0x584) = 0;
    *(undefined8 *)((long)plVar9 + 0x57c) = 0;
    plVar9[0xb1] = 0x4120000041a00000;
    *plVar9 = (long)&PTR_LAB_04994928;
    plVar9[0xb2] = -0xbf600000;
    if (__dest == "FishActionMuseumChasePlayer") {
      return plVar9;
    }
    iVar10 = (int)plVar9[0xd];
    __src = "FishActionMuseumChasePlayer";
    break;
  case 4:
    if (DAT_05ae7600 == 0) {
      plVar9 = malloc(0xf08);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar4 + 8);
        if (lVar8 != 0) {
          param_3 = (long *)(lVar8 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar9 = (long *)0x0;
          goto LAB_013cd190;
        }
      }
      plVar9 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0xf08,8);
    }
LAB_013cd190:
    FUN_013c216c(plVar9);
    *(undefined4 *)(plVar9 + 0xac) = 0;
    puVar2 = PTR_DAT_04bbc980;
    *(undefined1 *)(plVar9 + 0xad) = 0;
    plVar9[0xaa] = 0x41f0000000000000;
    plVar9[0xab] = 0x3fb33333;
    *(undefined8 *)((long)plVar9 + 0x57c) = 0;
    *(undefined8 *)((long)plVar9 + 0x56c) = 0;
    *plVar9 = (long)(puVar2 + 0x10);
    uVar1 = DAT_04c9a0c8;
    *(undefined8 *)((long)plVar9 + 0x571) = 0;
    plVar9[0xb1] = 0;
    plVar9[0xb2] = 0;
    plVar9[0xb7] = 0;
    plVar9[0xb6] = 0;
    *(undefined8 *)((long)plVar9 + 0x5c4) = 0;
    *(undefined8 *)((long)plVar9 + 0x5cc) = 0;
    plVar9[0xbb] = 0;
    plVar9[0xbc] = 0;
    *(undefined4 *)((long)plVar9 + 0x564) = uVar1;
    *(undefined4 *)((long)plVar9 + 0x584) = uVar1;
    *(undefined4 *)(plVar9 + 0xb3) = uVar1;
    *(undefined4 *)((long)plVar9 + 0x5ac) = uVar1;
    *(undefined4 *)(plVar9 + 0xb8) = uVar1;
    *(undefined4 *)((long)plVar9 + 0x5d4) = uVar1;
    *(undefined4 *)(plVar9 + 0xbd) = uVar1;
    *(undefined8 *)((long)plVar9 + 0x5ec) = 0;
    *(undefined8 *)((long)plVar9 + 0x5f4) = 0;
    *(undefined4 *)((long)plVar9 + 0x5fc) = uVar1;
    plVar9[0xc0] = 0;
    plVar9[0xc1] = 0;
    *(undefined4 *)(plVar9 + 0xc2) = uVar1;
    *(undefined8 *)((long)plVar9 + 0x614) = 0;
    *(undefined8 *)((long)plVar9 + 0x61c) = 0;
    *(undefined4 *)((long)plVar9 + 0x624) = uVar1;
    *(undefined8 *)((long)plVar9 + 0x59c) = 0;
    *(undefined8 *)((long)plVar9 + 0x5a4) = 0;
    memset(plVar9 + 0xc5,0,0x3d9);
    *(undefined2 *)(plVar9 + 0x14a) = 0;
    *(undefined8 *)((long)plVar9 + 0xa04) = 0x300000003;
    __dest = (char *)plVar9[0xc];
    *(undefined8 *)((long)plVar9 + 0xa0c) = 0x3a83126f3f800000;
    *(undefined4 *)((long)plVar9 + 0xf04) = 0;
    if (__dest == "FishActionMuseumLegion") {
      return plVar9;
    }
    iVar10 = (int)plVar9[0xd];
    __src = "FishActionMuseumLegion";
    iVar11 = iVar10 + -1;
    bVar5 = SBORROW4(iVar10,0x16);
    bVar6 = iVar10 + -0x16 < 0;
    bVar7 = iVar10 == 0x16;
    iVar10 = 0x16;
    goto LAB_013cd434;
  case 5:
    if (DAT_05ae7600 == 0) {
      plVar9 = malloc(0x558);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar4 + 8);
        if (lVar8 != 0) {
          param_3 = (long *)(lVar8 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar9 = (long *)0x0;
          goto LAB_013cd2c4;
        }
      }
      plVar9 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x558,8);
    }
LAB_013cd2c4:
    FUN_013c216c(plVar9);
    puVar2 = PTR_DAT_04bbc9a8;
    __dest = (char *)plVar9[0xc];
    *(undefined4 *)(plVar9 + 0xaa) = 0;
    *(undefined1 *)((long)plVar9 + 0x556) = 0;
    *(undefined2 *)((long)plVar9 + 0x554) = 0x100;
    *plVar9 = (long)(puVar2 + 0x10);
    if (__dest == "FishActionMuseumPredator") {
      return plVar9;
    }
    iVar10 = (int)plVar9[0xd];
    __src = "FishActionMuseumPredator";
    iVar11 = iVar10 + -1;
    bVar5 = SBORROW4(iVar10,0x18);
    bVar6 = iVar10 + -0x18 < 0;
    bVar7 = iVar10 == 0x18;
    iVar10 = 0x18;
    goto LAB_013cd434;
  case 6:
    if (DAT_05ae7600 == 0) {
      plVar9 = malloc(0x5d8);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar4 + 8);
        if (lVar8 != 0) {
          param_3 = (long *)(lVar8 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar9 = (long *)0x0;
          goto LAB_013cd328;
        }
      }
      plVar9 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x5d8,8);
    }
LAB_013cd328:
    FUN_013c216c(plVar9);
    plVar9[0xaa] = 0x3f000000;
    puVar2 = PTR_DAT_04bbc948;
    plVar9[0xab] = 0x4220000041f00000;
    __dest = (char *)plVar9[0xc];
    plVar9[0xac] = (long)&DAT_3f8000003f800000;
    plVar9[0xb0] = 0;
    plVar9[0xad] = 0x4120000000000000;
    plVar9[0xb1] = 0;
    plVar9[0xae] = 0x41a0000042700000;
    *plVar9 = (long)(puVar2 + 0x10);
    plVar9[0xaf] = 0x42c8000041a00000;
    plVar9[0xb2] = 0x3dcccccd00000000;
    *(undefined8 *)((long)plVar9 + 0x5b4) = 0;
    *(undefined8 *)((long)plVar9 + 0x5a4) = 0;
    *(undefined8 *)((long)plVar9 + 0x5ac) = 0;
    *(undefined4 *)((long)plVar9 + 0x5bc) = 0x3e800000;
    *(undefined8 *)((long)plVar9 + 0x5cc) = 0;
    if (__dest == "FishActionMuseumAntiStream") {
      return plVar9;
    }
    iVar10 = (int)plVar9[0xd];
    __src = "FishActionMuseumAntiStream";
    iVar11 = iVar10 + -1;
    bVar5 = SBORROW4(iVar10,0x1a);
    bVar6 = iVar10 + -0x1a < 0;
    bVar7 = iVar10 == 0x1a;
    iVar10 = 0x1a;
    goto LAB_013cd434;
  case 7:
    if (DAT_05ae7600 == 0) {
      plVar9 = malloc(0x560);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar4 + 8);
        if (lVar8 != 0) {
          param_3 = (long *)(lVar8 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          plVar9 = (long *)0x0;
          goto LAB_013cd3e8;
        }
      }
      plVar9 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x560,8);
    }
LAB_013cd3e8:
    FUN_013c216c(plVar9);
    __dest = (char *)plVar9[0xc];
    plVar9[0xaa] = 0;
    *(undefined2 *)(plVar9 + 0xab) = 0;
    *plVar9 = (long)&PTR_LAB_04995300;
    if (__dest == "FishActionMuseumSwimAndWait") {
      return plVar9;
    }
    iVar10 = (int)plVar9[0xd];
    __src = "FishActionMuseumSwimAndWait";
    break;
  default:
    return (long *)0x0;
  }
  iVar11 = iVar10 + -1;
  bVar5 = SBORROW4(iVar10,0x1b);
  bVar6 = iVar10 + -0x1b < 0;
  bVar7 = iVar10 == 0x1b;
  iVar10 = 0x1b;
LAB_013cd434:
  if (bVar7 || bVar6 != bVar5) {
    iVar10 = iVar11;
  }
  memcpy(__dest,__src,(long)iVar10);
  __dest[iVar10] = '\0';
  return plVar9;
}

