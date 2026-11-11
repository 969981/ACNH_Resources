
void FUN_00429e50(long *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  void *pvVar4;
  size_t __n;
  void *pvVar5;
  long lVar6;
  uint uVar7;
  void *__s;
  
  *(undefined4 *)(param_2 + 1) = 0;
  puVar3 = PTR_DAT_048607b8;
  pvVar5 = (void *)*param_1;
  lVar6 = param_1[1];
  __n = lVar6 - (long)pvVar5;
  if (__n == 0) {
    uVar7 = 0;
    if ((*(uint *)((long)param_2 + 0xc) & 0x3fffffff) != 0) goto LAB_00429f54;
  }
  else {
    uVar7 = 0;
    __s = pvVar5;
    do {
      pvVar4 = memchr(__s,param_3 & 0xff,__n);
      if (pvVar4 == (void *)0x0) {
        pvVar5 = __s;
        break;
      }
      pvVar5 = (void *)((long)pvVar4 + 1);
      if (uVar7 == (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
        FUN_00426990(puVar3,param_2,0x10);
        uVar7 = *(uint *)(param_2 + 1);
      }
      puVar1 = (undefined8 *)(*param_2 + (long)(int)uVar7 * 0x10);
      uVar7 = uVar7 + 1;
      *puVar1 = __s;
      puVar1[1] = pvVar4;
      __n = lVar6 - (long)pvVar5;
      *(uint *)(param_2 + 1) = uVar7;
      __s = pvVar5;
    } while (__n != 0);
    lVar6 = param_1[1];
    if (uVar7 != (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) goto LAB_00429f54;
  }
  FUN_00426990(PTR_DAT_048607b8,param_2,0x10);
  uVar7 = *(uint *)(param_2 + 1);
LAB_00429f54:
  plVar2 = (long *)(*param_2 + (long)(int)uVar7 * 0x10);
  *plVar2 = (long)pvVar5;
  plVar2[1] = lVar6;
  *(uint *)(param_2 + 1) = uVar7 + 1;
  return;
}

