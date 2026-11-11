
void FUN_003dafd0(long param_1,void *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auStack_b0 [128];
  
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x38);
  iVar2 = 0;
  if (uVar5 != 0) {
    iVar2 = (int)(*(ulong *)(param_1 + 0x368) / uVar5);
  }
  *(int *)(param_1 + 0x310) = iVar2;
  if (iVar2 != 0) {
    if ((*(int *)(param_1 + 0x318) == 0) ||
       ((*(char *)(param_1 + 0x59) != '\0' && (*(int *)(param_1 + 0x318) == 1)))) {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x38))();
      iVar2 = *(int *)(param_1 + 0x310);
      *(undefined8 *)(param_1 + 0x328) = uVar1;
    }
    if (iVar2 != 1) {
      (**(code **)(**(long **)(param_1 + 0x3600) + 0x18))
                (*(long **)(param_1 + 0x3600),*(undefined8 *)(param_1 + 0x28));
      uVar3 = *(uint *)(param_1 + 0x310);
      if (1 < uVar3) {
        uVar6 = 1;
        do {
          uVar4 = *(uint *)(param_1 + 0x318);
          if (uVar4 != 0) {
            if (*(char *)(param_1 + 0x59) != '\0') {
              uVar4 = uVar4 - 1;
            }
            if (uVar6 == uVar4) {
              uVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x38))();
              uVar3 = *(uint *)(param_1 + 0x310);
              *(undefined8 *)(param_1 + 0x328) = uVar1;
            }
          }
          if (uVar6 == uVar3 - 1) {
            if (*(long *)(param_1 + 0x3608) != 0) {
              uVar3 = *(uint *)(param_1 + 0x50);
              if (0 < (int)uVar3) {
                memcpy(auStack_b0,param_2,(ulong)uVar3 << 3);
              }
              (**(code **)(**(long **)(param_1 + 0x3600) + 0x20))
                        (*(long **)(param_1 + 0x3600),auStack_b0,*(undefined8 *)(param_1 + 0x28),
                         (ulong)uVar3,2);
            }
          }
          else {
            (**(code **)(**(long **)(param_1 + 0x3600) + 0x18))
                      (*(long **)(param_1 + 0x3600),*(undefined8 *)(param_1 + 0x28));
          }
          uVar3 = *(uint *)(param_1 + 0x310);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
    }
  }
  return;
}

