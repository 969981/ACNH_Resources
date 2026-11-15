
uint FUN_020fdb40(byte *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  ulong uVar6;
  char cVar7;
  uint *puVar8;
  int *piVar9;
  long lVar10;
  undefined *local_48;
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_34 [7];
  undefined1 local_2d;
  undefined4 local_24;
  
  lVar10 = *(long *)PTR_DAT_04bb4138;
  if (lVar10 != 0) {
    local_2d = 0;
    local_38 = 8;
    local_34[0] = 0;
    local_40 = local_34;
    local_48 = PTR_DAT_04bb3768 + 0x10;
    FUN_038d1270(&local_48,"-----");
    if ((ulong)*param_1 < 0x23) {
      FUN_038d1270(&local_48,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0)
                   ,param_1[1]);
    }
    (**(code **)(local_48 + 0x18))(&local_48);
    local_24 = FUN_006bd550(local_40,0);
    puVar5 = (uint *)FUN_0079e770(lVar10,&local_24);
    puVar4 = PTR_DAT_04bb40b8;
    puVar3 = PTR_DAT_04bb40b0;
    if (puVar5 != (uint *)0x0) {
      if (*puVar5 == 0) {
        return 0;
      }
      cVar7 = *PTR_DAT_04bb40b0;
      while( true ) {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x30);
          if (-1 < (int)uVar2) {
            if ((ushort *)((ulong)uVar2 + (long)puVar5) == (ushort *)0x0) {
              return 0;
            }
            return (uint)*(ushort *)((ulong)uVar2 + (long)puVar5);
          }
          if (uVar2 != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*puVar5;
        if (*puVar5 == 0) {
          return 0;
        }
        if (puVar5 == puVar8) break;
        lVar10 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar8)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar5 + (lVar10 - (long)puVar8);
        if (lVar10 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar8));
        *(undefined4 *)(puVar4 + 0x30) = 0xfffffffe;
        if (uVar6 == 0) {
          return 0;
        }
        piVar9 = (int *)(lVar10 + 4);
        while (piVar9[-1] != 0x504428b5) {
          piVar9 = piVar9 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar9 != -1) {
          iVar1 = *piVar9;
        }
        *(int *)(puVar4 + 0x30) = iVar1;
        if (*puVar5 == 0) {
          return 0;
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}

