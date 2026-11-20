
void FUN_03eaedc0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  char *__s;
  long lVar4;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    (**(code **)(**(long **)(param_2 + 8) + 0x60))
              (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
               *(undefined4 *)(param_2 + 0x18),0xc2);
    uVar2 = *(uint *)(param_1 + 0x18);
    (**(code **)(**(long **)(param_2 + 8) + 0x60))
              (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
               *(undefined4 *)(param_2 + 0x18),uVar2);
    (**(code **)(**(long **)(param_2 + 8) + 0x60))
              (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
               *(undefined4 *)(param_2 + 0x18),uVar2 >> 8);
    (**(code **)(**(long **)(param_2 + 8) + 0x60))
              (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
               *(undefined4 *)(param_2 + 0x18),uVar2 >> 0x10);
    uVar2 = *(int *)(param_1 + 0x18) * 4 + 8;
    for (lVar4 = *(long *)(param_1 + 0x10); lVar4 != param_1 + 8; lVar4 = *(long *)(lVar4 + 8)) {
      (**(code **)(**(long **)(param_2 + 8) + 0x70))
                (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                 *(undefined4 *)(param_2 + 0x18),uVar2);
      sVar3 = strlen(*(char **)(lVar4 + 0x10));
      uVar2 = uVar2 + (int)sVar3 + 1;
    }
    (**(code **)(**(long **)(param_2 + 8) + 0x70))
              (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
               *(undefined4 *)(param_2 + 0x18),uVar2);
    for (lVar4 = *(long *)(param_1 + 0x10); lVar4 != param_1 + 8; lVar4 = *(long *)(lVar4 + 8)) {
      __s = *(char **)(lVar4 + 0x10);
      sVar3 = strlen(__s);
      (**(code **)(**(long **)(param_2 + 8) + 0xb8))
                (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),__s,sVar3);
      (**(code **)(**(long **)(param_2 + 8) + 0x60))
                (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                 *(undefined4 *)(param_2 + 0x18),0);
    }
    uVar1 = uVar2 & 3;
    if (-1 < (int)-uVar2) {
      uVar1 = -(-uVar2 & 3);
    }
    if ((((uVar1 != 0) &&
         ((**(code **)(**(long **)(param_2 + 8) + 0x60))
                    (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                     *(undefined4 *)(param_2 + 0x18),0), uVar1 != 3)) &&
        ((**(code **)(**(long **)(param_2 + 8) + 0x60))
                   (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                    *(undefined4 *)(param_2 + 0x18),0), uVar1 != 2)) &&
       ((**(code **)(**(long **)(param_2 + 8) + 0x60))
                  (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                   *(undefined4 *)(param_2 + 0x18),0), uVar1 != 1)) {
      (**(code **)(**(long **)(param_2 + 8) + 0x60))
                (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                 *(undefined4 *)(param_2 + 0x18),0);
      (**(code **)(**(long **)(param_2 + 8) + 0x60))
                (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                 *(undefined4 *)(param_2 + 0x18),0);
      if (((uVar1 != 0xffffffff) &&
          ((**(code **)(**(long **)(param_2 + 8) + 0x60))
                     (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                      *(undefined4 *)(param_2 + 0x18),0), uVar1 != 0xfffffffe)) &&
         ((**(code **)(**(long **)(param_2 + 8) + 0x60))
                    (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                     *(undefined4 *)(param_2 + 0x18),0), uVar1 != 0xfffffffd)) {
                    /* WARNING: Could not recover jumptable at 0x03eaf02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_2 + 8) + 0x60))
                  (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                   *(undefined4 *)(param_2 + 0x18),0);
        return;
      }
    }
  }
  return;
}

