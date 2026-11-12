
undefined1 FUN_00874190(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *__s;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  char cVar9;
  undefined4 local_44;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  local_44 = FUN_006bd550(param_2[1],0);
  puVar5 = (uint *)FUN_0088c0d0(param_1 + 8,&local_44);
  __s = PTR_DAT_04bb3250;
  puVar4 = PTR_DAT_04bb3248;
  if ((puVar5 == (uint *)0x0) || (*puVar5 == 0)) {
    return 0;
  }
  cVar9 = *PTR_DAT_04bb3248;
  while( true ) {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *puVar4 = 1;
      memset(__s,0xff,0x288);
    }
    else {
      uVar3 = *(uint *)(__s + 0x268);
      if (-1 < (int)uVar3) {
        if ((undefined1 *)((ulong)uVar3 + (long)puVar5) == (undefined1 *)0x0) {
          return 0;
        }
        return *(undefined1 *)((ulong)uVar3 + (long)puVar5);
      }
      if (uVar3 != 0xffffffff) {
        return 0;
      }
    }
    puVar6 = (uint *)(ulong)*puVar5;
    if (*puVar5 == 0) {
      return 0;
    }
    if (puVar5 == puVar6) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar6)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar5 + (lVar2 - (long)puVar6);
    if (lVar2 == 0) {
      return 0;
    }
    uVar7 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar6));
    *(undefined4 *)(__s + 0x268) = 0xfffffffe;
    if (uVar7 == 0) {
      return 0;
    }
    piVar8 = (int *)(lVar2 + 4);
    while (piVar8[-1] != -0x46dd775d) {
      piVar8 = piVar8 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar8 != -1) {
      iVar1 = *piVar8;
    }
    *(int *)(__s + 0x268) = iVar1;
    if (*puVar5 == 0) {
      return 0;
    }
  }
  return 0;
}

