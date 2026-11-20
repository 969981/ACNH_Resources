
void FUN_03f184f0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 param_5,uint param_6)

{
  bool bVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_70;
  undefined4 local_68;
  float local_54;
  
  lVar5 = *(long *)(param_1 + 0xa8);
  local_70 = param_4;
  local_68 = param_5;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x20) == *(int *)(param_1 + 0xb0))) {
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x10;
    if ((*(long *)(lVar5 + 0x28) != 0) && (*(long *)(lVar5 + 0x58) != 0)) {
      plVar3 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar5 + 0x28) + 0x30) + 0x18) +
                                   0x20))();
      plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
      (**(code **)(*plVar3 + 0x10))();
      (**(code **)(**(long **)(lVar5 + 0x58) + 0x38))(*(long **)(lVar5 + 0x58),0xffffffff);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    FUN_03f164d0(*(long *)(*(long *)(param_1 + 8) + 8) + 0x20);
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  bVar1 = (param_6 & 1) == 0;
  if (bVar1) {
    lVar5 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(long *)(param_1 + 0xa8) = lVar5;
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0xb0) = uVar2;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0xb8) = uVar4;
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0xc0) = uVar2;
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x138) = uVar4;
  }
  *(bool *)(param_1 + 0x9c) = !bVar1;
  if (*(char *)(param_1 + 0x160) != '\0') {
    *(undefined1 *)(param_1 + 0x160) = 0;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  local_54 = 0.0;
  *(undefined8 *)(param_1 + 0x118) = uVar4;
  lVar5 = *(long *)(param_1 + 0x90);
  if (*(char *)(lVar5 + 0x15) == '\0') {
    lVar5 = *(long *)(lVar5 + 0x18);
  }
  else {
    lVar5 = (long)(DAT_05ae7888 * (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4))
                  * 5) / 1000 + *(long *)(lVar5 + 0x18);
  }
  *(long *)(param_1 + 0x88) = lVar5;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x78);
  FUN_03f17d2c(param_1,param_2,*param_3,*(undefined4 *)(param_3 + 1),&local_54);
  if ((float)param_4 < local_54) {
    local_70 = CONCAT44(local_70._4_4_,local_54);
  }
  FUN_03f234f8((undefined8 *)(param_1 + 200),&local_70);
  *(undefined1 *)(param_1 + 0x135) = 0;
  return;
}

