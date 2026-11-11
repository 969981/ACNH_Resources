
bool FUN_003d6190(long *param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar1 = *(ushort *)(param_2 + 0xc);
  uVar3 = (ulong)uVar1;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    plVar6 = param_1 + 0x2190;
    if ((char)param_1[7] == '\0') {
      if ((uVar1 & 1) != 0) {
        *(undefined1 *)plVar6 = 1;
        param_1[0x233f] = -1;
        param_1[0x2340] = -1;
      }
      uVar2 = 1;
      if (1 < uVar1) {
        plVar6 = param_1 + 0x21a0;
        uVar7 = 1;
        do {
          uVar2 = (uint)uVar3;
          if ((uVar2 >> 1 & 1) != 0) {
            if (7 < uVar7) break;
            *(undefined1 *)plVar6 = 1;
          }
          uVar3 = uVar3 >> 1;
          uVar7 = uVar7 + 1;
          plVar6 = plVar6 + 0x10;
        } while (3 < uVar2);
        uVar2 = (uint)uVar7;
      }
    }
    else {
      if (*(char *)((long)param_1 + 0xd9) == '\0') {
        if ((uVar1 & 1) != 0) {
          param_1[0x233f] = 0;
          param_1[0x2340] = 0;
          *(undefined1 *)plVar6 = 1;
        }
        uVar2 = 1;
        if (uVar1 < 2) goto LAB_003d629c;
        plVar6 = param_1 + 0x21a0;
        uVar7 = 1;
        do {
          uVar2 = (uint)uVar3;
          if ((uVar2 >> 1 & 1) != 0) {
            if (7 < uVar7) break;
            *(undefined1 *)plVar6 = 1;
          }
          uVar3 = uVar3 >> 1;
          uVar7 = uVar7 + 1;
          plVar6 = plVar6 + 0x10;
        } while (3 < uVar2);
      }
      else {
        if ((uVar1 & 1) != 0) {
          *(undefined1 *)plVar6 = 1;
        }
        uVar2 = 1;
        if (uVar1 < 2) goto LAB_003d629c;
        plVar6 = param_1 + 0x21a0;
        uVar7 = 1;
        do {
          uVar2 = (uint)uVar3;
          if ((uVar2 >> 1 & 1) != 0) {
            if (7 < uVar7) break;
            *(undefined1 *)plVar6 = 1;
          }
          uVar3 = uVar3 >> 1;
          uVar7 = uVar7 + 1;
          plVar6 = plVar6 + 0x10;
        } while (3 < uVar2);
      }
      uVar2 = (uint)uVar7;
    }
  }
LAB_003d629c:
  if (7 < uVar2) {
    uVar2 = 8;
  }
  *(uint *)((long)param_1 + 0x46c) = uVar2;
  if (uVar2 == 0) {
    (**(code **)(*param_1 + 0x18))();
    return false;
  }
  lVar4 = *(long *)(param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 0x1a6) = *(undefined8 *)(param_2 + 0x17);
  param_1[0x34] = lVar4;
  uVar5 = *(undefined8 *)(param_2 + 0x1f);
  *(undefined8 *)((long)param_1 + 0x1b4) = *(undefined8 *)(param_2 + 0x25);
  *(undefined8 *)((long)param_1 + 0x1ae) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x2d);
  *(undefined8 *)((long)param_1 + 0x1c2) = *(undefined8 *)(param_2 + 0x33);
  *(undefined8 *)((long)param_1 + 0x1bc) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x3b);
  param_1[0x3a] = *(long *)(param_2 + 0x41);
  *(undefined8 *)((long)param_1 + 0x1ca) = uVar5;
  lVar4 = *(long *)(param_2 + 0x49);
  *(undefined8 *)((long)param_1 + 0x1de) = *(undefined8 *)(param_2 + 0x4f);
  param_1[0x3b] = lVar4;
  uVar5 = *(undefined8 *)(param_2 + 0x57);
  *(undefined8 *)((long)param_1 + 0x1ec) = *(undefined8 *)(param_2 + 0x5d);
  *(undefined8 *)((long)param_1 + 0x1e6) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x65);
  *(undefined8 *)((long)param_1 + 0x1fa) = *(undefined8 *)(param_2 + 0x6b);
  *(undefined8 *)((long)param_1 + 500) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x73);
  param_1[0x41] = *(long *)(param_2 + 0x79);
  *(undefined8 *)((long)param_1 + 0x202) = uVar5;
  return uVar2 != 0;
}

