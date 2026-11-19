
undefined8 FUN_038da854(long param_1,int *param_2)

{
  int *piVar1;
  undefined *puVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ulong uVar8;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  *(int **)(param_1 + 0x20) = param_2;
  if (*param_2 == 0x43524153) {
    uVar7 = (uint)(*(ushort *)((long)param_2 + 6) >> 8 < 0xff ||
                  (*(ushort *)((long)param_2 + 6) & 0xff) != 0xfe);
    *(uint *)(param_1 + 0x50) = uVar7;
    puVar2 = PTR_PTR_04bc5650;
    sVar3 = (**(code **)(PTR_PTR_04bc5650 + (ulong)(uVar7 ^ 1) * 8 + 0x10))((short)param_2[4]);
    if ((sVar3 == 0x100) &&
       (sVar3 = (**(code **)(puVar2 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x10))
                          (*(undefined2 *)(*(long *)(param_1 + 0x20) + 4)), sVar3 == 0x14)) {
      uVar4 = (**(code **)(puVar2 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x10))
                        (*(undefined2 *)(*(long *)(param_1 + 0x20) + 4));
      piVar1 = (int *)((long)param_2 + (ulong)uVar4);
      *(int **)(param_1 + 0x28) = piVar1;
      if ((*piVar1 == 0x54414653) &&
         ((sVar3 = (**(code **)(puVar2 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x10))
                             ((short)piVar1[1]), sVar3 == 0xc &&
          (uVar8 = (**(code **)(puVar2 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x10))
                             (*(undefined2 *)(*(long *)(param_1 + 0x28) + 6)), (uVar8 & 0xc000) == 0
          )))) {
        uVar7 = (**(code **)(puVar2 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x10))
                          (*(undefined2 *)(*(long *)(param_1 + 0x28) + 6));
        uVar8 = (**(code **)(puVar2 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x10))
                          (*(undefined2 *)(*(long *)(param_1 + 0x20) + 4));
        uVar4 = (**(code **)(puVar2 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x10))
                          (*(undefined2 *)(*(long *)(param_1 + 0x28) + 4));
        if ((uVar7 & 0xffff) != 0) {
          *(uint *)(param_1 + 0x38) = uVar7 & 0xffff;
          *(ulong *)(param_1 + 0x40) = (long)param_2 + (ulong)uVar4 + (uVar8 & 0xffff);
        }
        uVar4 = (**(code **)(puVar2 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x10))
                          (*(undefined2 *)(*(long *)(param_1 + 0x20) + 4));
        uVar5 = (**(code **)(puVar2 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x10))
                          (*(undefined2 *)(*(long *)(param_1 + 0x28) + 4));
        uVar6 = (**(code **)(puVar2 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x10))
                          (*(undefined2 *)(*(long *)(param_1 + 0x28) + 6));
        piVar1 = (int *)((long)param_2 + (ulong)uVar6 * 0x10 + (ulong)uVar5 + (ulong)uVar4);
        if ((*piVar1 == 0x544e4653) &&
           (sVar3 = (**(code **)(puVar2 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x10))
                              ((short)piVar1[1]), sVar3 == 8)) {
          uVar4 = (**(code **)(puVar2 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x10))
                            ((short)piVar1[1]);
          *(ulong *)(param_1 + 0x30) = (long)piVar1 + (ulong)uVar4;
          uVar8 = (**(code **)(puVar2 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x20))
                            (*(undefined4 *)(*(long *)(param_1 + 0x20) + 0xc));
          if (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x20) <= (long)(uVar8 & 0xffffffff)) {
            uVar8 = (**(code **)(puVar2 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x20))
                              (*(undefined4 *)(*(long *)(param_1 + 0x20) + 0xc));
            *(ulong *)(param_1 + 0x48) = (long)param_2 + (uVar8 & 0xffffffff);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

