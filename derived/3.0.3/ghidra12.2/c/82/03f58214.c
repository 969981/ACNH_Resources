
ulong FUN_03f58214(long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  plVar3 = (long *)(**(code **)(**(long **)PTR_DAT_04bdf328 + 0x10))
                             (*(long **)PTR_DAT_04bdf328,0x3cbf40,0x20);
  if (plVar3 != (long *)0x0) {
    memset(plVar3,0,0x3cbf40);
    FUN_03fe71f0(plVar3,param_1 + 0x38);
    *(undefined2 *)((long)plVar3 + 0x3cbd35) = 0;
    *(undefined4 *)((long)plVar3 + 0x3cbd31) = 0;
    FUN_03f5c730(plVar3);
    *(undefined8 *)(plVar3[0x69c0f] + 0x18) = *(undefined8 *)(*plVar3 + 0x78);
    FUN_03fe6cd0(plVar3);
    FUN_03f81fec(plVar3);
  }
  plVar4 = *(long **)(param_1 + 0xc0);
  *(long **)(param_1 + 0x10) = plVar3;
  lVar6 = *(long *)(param_1 + 8);
  plVar4[4] = (long)(plVar3 + 0x69c30);
  plVar4[6] = (long)plVar3;
  plVar4[8] = param_2;
  if (*(char *)((long)plVar4 + 100) == -1) {
    *(char *)((long)plVar4 + 100) = (char)*(undefined4 *)(lVar6 + 0x30);
    iVar2 = (int)plVar4[0xd];
  }
  else {
    iVar2 = (int)plVar4[0xd];
  }
  if (iVar2 == 0) {
    *(undefined4 *)(plVar4 + 0xd) = *(undefined4 *)(lVar6 + 0x34);
  }
  plVar4[0x12] = param_2;
  uVar1 = *(undefined4 *)(lVar6 + 0x1c);
  plVar4[0x19] = param_1 + 0x40;
  *(undefined4 *)((long)plVar4 + 0xb4) = uVar1;
  (**(code **)(*plVar4 + 0x78))(plVar4,0);
  uVar5 = FUN_03f5d5a0(*(undefined8 *)(param_1 + 0x10),param_1 + 0x40,*(undefined8 *)(param_1 + 8),
                       param_3,param_2,*(long *)(param_1 + 0xc0) + 0x88);
  if ((int)uVar5 == 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      *(undefined4 *)(param_2 + 0xc) = 0x32;
    }
    puVar7 = *(undefined8 **)(param_1 + 0xc0);
    (**(code **)*puVar7)(puVar7);
    uVar5 = (ulong)*(uint *)(puVar7 + 1);
    if (*(uint *)(puVar7 + 1) == 0) {
      plVar3 = *(long **)(param_1 + 0x10);
      *(undefined8 *)(plVar3[0x69c0f] + 0x18) = *(undefined8 *)(*plVar3 + 0x78);
      FUN_03fe6cd0(plVar3);
      FUN_03f81fec(plVar3);
      *(undefined4 *)(param_1 + 0x2c) = 5;
      uVar5 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x30))
                        (*(long **)(param_1 + 0xc0),*(undefined8 *)(param_1 + 8));
      if ((int)uVar5 == 0) {
        plVar3 = *(long **)(param_1 + 0x10);
        *(undefined1 *)(plVar3 + 0xf419) = 1;
        (**(code **)**(undefined8 **)(*plVar3 + 0x78))(*(undefined8 **)(*plVar3 + 0x78),plVar3);
        *(undefined1 *)(plVar3 + 0x6ec35) = 0;
        *(undefined4 *)((long)plVar3 + 0x3761aa) = 0xffff;
        *(undefined2 *)((long)plVar3 + 0x3761ae) = 0;
        if ((char)plVar3[0x69b39] == '\0') {
          if ((char)plVar3[0x68e2] == '\0') {
            FUN_03f5b2e0(plVar3);
          }
          else {
            FUN_03f5bb90();
          }
        }
        else if ((char)plVar3[0x68e2] == '\0') {
          FUN_03f5c040();
        }
        else {
          FUN_03f5c250();
        }
        *(undefined1 *)((long)plVar3 + 0x38a459) = 0;
        (**(code **)(**(long **)(*plVar3 + 0x78) + 8))(*(long **)(*plVar3 + 0x78),plVar3);
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}

