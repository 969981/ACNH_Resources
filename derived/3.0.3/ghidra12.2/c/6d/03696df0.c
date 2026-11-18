
undefined8 FUN_03696df0(long param_1,uint param_2,long *param_3)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  char cVar5;
  bool bVar6;
  undefined2 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  void *__dest;
  void *__src;
  undefined8 *puVar11;
  long lVar12;
  undefined2 local_64;
  undefined1 local_62;
  
  if (param_2 == 0xffffffff) {
    return 0;
  }
  local_64 = 0x23;
  puVar4 = (undefined2 *)(param_1 + 0x698) + (ulong)param_2 * 0x6c;
  if (0x25 < param_2) {
    puVar4 = (undefined2 *)(param_1 + 0x698);
  }
  local_62 = 8;
  FUN_020fd3a0(&local_64,param_3);
  uVar8 = (ulong)(byte)local_64;
  if (((0x22 < uVar8) || ((byte)PTR_DAT_04bc27f0[uVar8] < local_64._1_1_)) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(local_64._1_1_ & 0x1f) & 1) == 0)) {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb4e28;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x1238) != 0)) {
    puVar11 = *(undefined8 **)(lVar9 + 0x1240);
    puVar2 = puVar11 + *(int *)(lVar9 + 0x1238);
    do {
      plVar10 = (long *)*puVar11;
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      lVar12 = plVar10[1];
      (**(code **)(*(long *)(puVar4 + 4) + 0x18))(puVar4 + 4);
      lVar9 = *(long *)(puVar4 + 8);
      __dest = (void *)plVar10[1];
      if (lVar12 == lVar9) {
LAB_03696fac:
        (**(code **)(*param_3 + 0x18))(param_3);
        __src = (void *)param_3[1];
        if (__dest != __src) {
          (**(code **)(*param_3 + 0x18))(param_3);
          lVar9 = 0;
          goto LAB_03696fe0;
        }
        break;
      }
      uVar8 = 0;
      bVar6 = true;
      do {
        if (*(char *)((long)__dest + uVar8) != *(char *)(lVar9 + uVar8)) break;
        if (*(char *)((long)__dest + uVar8) == '\0') {
          if (bVar6) goto LAB_03696fac;
          break;
        }
        cVar5 = *(char *)((long)__dest + uVar8 + 1);
        if (cVar5 != *(char *)(lVar9 + uVar8 + 1)) break;
        if (cVar5 == '\0') goto LAB_03696fac;
        cVar5 = *(char *)((long)__dest + uVar8 + 2);
        if (cVar5 != *(char *)(lVar9 + uVar8 + 2)) break;
        if (cVar5 == '\0') goto LAB_03696fac;
        bVar6 = uVar8 < 0x7fffe;
        uVar8 = uVar8 + 3;
      } while (uVar8 != 0x80001);
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar2);
  }
  goto LAB_03697044;
  while( true ) {
    lVar12 = param_3[1] + lVar9;
    if (*(char *)(lVar12 + 1) == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_0369701c;
    }
    if (*(char *)(lVar12 + 2) == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_0369701c;
    }
    lVar9 = lVar9 + 3;
    if (lVar9 == 0x80001) break;
LAB_03696fe0:
    if (*(char *)(param_3[1] + lVar9) == '\0') goto LAB_0369701c;
  }
  lVar9 = 0;
LAB_0369701c:
  iVar3 = (int)lVar9;
  if ((int)plVar10[2] <= (int)lVar9) {
    iVar3 = (int)plVar10[2] + -1;
  }
  memcpy(__dest,__src,(long)iVar3);
  *(undefined1 *)((long)__dest + (long)iVar3) = 0;
LAB_03697044:
  puVar1 = puVar4 + 4;
  FUN_038d1270(puVar1,"-----");
  if ((ulong)(byte)local_64 < 0x23) {
    FUN_038d1270(puVar1,"%s%02d",
                 *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)(byte)local_64 * 8 + 0xb0),local_64._1_1_
                );
  }
  uVar7 = FUN_0376baa0(puVar1);
  *puVar4 = uVar7;
  return 1;
}

