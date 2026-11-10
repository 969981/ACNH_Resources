
void FUN_00190c70(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  void *__dest;
  byte *pbVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  void *__src;
  ulong uVar8;
  
  *param_2 = *param_2 + 1;
  puVar5 = *(undefined8 **)(param_3 + 0x40);
  if (*(undefined8 **)(param_3 + 0x48) < puVar5 + 3) {
    FUN_00191a28(param_3 + 0x28,1);
    puVar5 = *(undefined8 **)(param_3 + 0x40);
  }
  *(undefined8 **)(param_3 + 0x40) = puVar5 + 3;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  *(undefined2 *)((long)puVar5 + 0x16) = 3;
  pbVar3 = (byte *)*param_2;
  if (*pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0) {
    do {
      pbVar3 = pbVar3 + 1;
    } while (*pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0);
  }
  *param_2 = (long)pbVar3;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*pbVar3 != 0x7d) {
      if (*pbVar3 == 0x22) {
        uVar8 = 0;
        do {
          FUN_00190890(param_1,param_2,param_3,1);
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          pbVar3 = (byte *)*param_2;
          pbVar6 = pbVar3;
          if (*pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0) {
            do {
              pbVar3 = pbVar3 + 1;
              pbVar6 = pbVar6 + 1;
            } while (*pbVar6 < 0x21 && (1L << ((ulong)*pbVar6 & 0x3f) & 0x100002600U) != 0);
          }
          *param_2 = (long)pbVar6;
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          if (*pbVar6 != 0x3a) {
            lVar4 = param_2[1];
            uVar7 = 5;
            goto LAB_00190f6c;
          }
          pbVar6 = pbVar6 + 1;
          *param_2 = (long)pbVar6;
          if (*pbVar6 < 0x21 && (1L << ((ulong)*pbVar6 & 0x3f) & 0x100002600U) != 0) {
            do {
              pbVar6 = pbVar6 + 1;
            } while (*pbVar6 < 0x21 && (1L << ((ulong)*pbVar6 & 0x3f) & 0x100002600U) != 0);
          }
          *param_2 = (long)pbVar6;
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          FUN_00190640(param_1,param_2,param_3);
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          pbVar3 = (byte *)*param_2;
          pbVar6 = pbVar3;
          if (*pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0) {
            do {
              pbVar3 = pbVar3 + 1;
              pbVar6 = pbVar6 + 1;
            } while (*pbVar6 < 0x21 && (1L << ((ulong)*pbVar6 & 0x3f) & 0x100002600U) != 0);
          }
          *param_2 = (long)pbVar6;
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar1;
          if (*pbVar6 != 0x2c) {
            if (*pbVar6 == 0x7d) {
              __src = (void *)(*(long *)(param_3 + 0x40) + uVar8 * -0x30);
              uVar2 = *(undefined8 *)(param_3 + 0x18);
              *param_2 = (long)(pbVar6 + 1);
              *(void **)(param_3 + 0x40) = __src;
              *(undefined2 *)((long)__src + -2) = 3;
              if (uVar1 == 0) {
                *(undefined8 *)((long)__src + -0x10) = 0;
                *(undefined4 *)((long)__src + -0x18) = 0;
                *(undefined4 *)((long)__src + -0x14) = 0;
                return;
              }
              __dest = (void *)FUN_00192174(uVar2,uVar8 * 0x30);
              *(void **)((long)__src + -0x10) = __dest;
              memcpy(__dest,__src,uVar8 * 0x30);
              *(uint *)((long)__src + -0x18) = uVar1;
              *(uint *)((long)__src + -0x14) = uVar1;
              return;
            }
            lVar4 = param_2[1];
            uVar7 = 6;
            goto LAB_00190f6c;
          }
          pbVar3 = pbVar6 + 1;
          *param_2 = (long)pbVar3;
          if (*pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0) {
            do {
              pbVar3 = pbVar3 + 1;
            } while (*pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0);
          }
          *param_2 = (long)pbVar3;
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
        } while (*pbVar3 == 0x22);
      }
      lVar4 = param_2[1];
      uVar7 = 4;
LAB_00190f6c:
      *(undefined4 *)(param_1 + 0x30) = uVar7;
      *(long *)(param_1 + 0x38) = (long)pbVar3 - lVar4;
      return;
    }
    *param_2 = (long)(pbVar3 + 1);
    lVar4 = *(long *)(param_3 + 0x40);
    *(undefined2 *)(lVar4 + -2) = 3;
    *(undefined8 *)(lVar4 + -0x18) = 0;
    *(undefined8 *)(lVar4 + -0x10) = 0;
  }
  return;
}

