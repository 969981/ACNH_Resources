
void FUN_0328a6e0(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint local_3c;
  
  if ((param_2 != *(char *)(param_1 + 0x57c)) &&
     (*(char *)(param_1 + 0x57c) = (char)param_2, (param_3 & 1) != 0)) {
    local_3c = 0;
    do {
      uVar4 = *(uint *)(param_1 + 0x470);
      lVar3 = *(long *)(param_1 + 0x478);
      uVar1 = local_3c;
      if (uVar4 <= local_3c) {
        uVar1 = 0;
      }
      if ((*(byte *)(lVar3 + (int)uVar1) & 1) == 0) {
        uVar1 = local_3c;
        if (*(uint *)(param_1 + 0x460) <= local_3c) {
          uVar1 = 0;
        }
        lVar5 = *(long *)(*(long *)(param_1 + 0x468) + (long)(int)uVar1 * 8);
        if (lVar5 != 0) {
          do {
            lVar3 = lVar5;
            plVar2 = *(long **)(lVar3 + 0x28);
            lVar5 = *(long *)(lVar3 + 0x18);
          } while (*(long *)(lVar3 + 0x18) != 0 && plVar2 == (long *)0x0);
          *(undefined4 *)(lVar3 + 0x6c) = 0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x20))(plVar2,0);
          }
          uVar1 = local_3c;
          if (*(uint *)(param_1 + 0x460) <= local_3c) {
            uVar1 = 0;
          }
          *(undefined8 *)(*(long *)(param_1 + 0x468) + (long)(int)uVar1 * 8) = 0;
          uVar4 = *(uint *)(param_1 + 0x470);
          lVar3 = *(long *)(param_1 + 0x478);
        }
        uVar1 = local_3c;
        if (uVar4 <= local_3c) {
          uVar1 = 0;
        }
        *(byte *)(lVar3 + (int)uVar1) = *(byte *)(lVar3 + (int)uVar1) & 0xfd;
      }
      local_3c = local_3c + 1;
    } while (local_3c != 4);
  }
  return;
}

