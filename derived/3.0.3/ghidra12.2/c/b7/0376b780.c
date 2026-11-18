
undefined2 FUN_0376b780(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint *puVar9;
  undefined2 uVar10;
  long lVar11;
  ulong uVar12;
  char cVar13;
  int *piVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined *local_78;
  undefined1 *local_70;
  int local_68;
  undefined1 local_64 [31];
  undefined1 local_45;
  undefined4 local_24;
  
  lVar15 = *(long *)PTR_DAT_04bb4958;
  if (lVar15 == 0) {
    uVar10 = 0;
  }
  else {
    local_68 = 0x20;
    local_45 = 0;
    local_78 = PTR_DAT_04bb2a08 + 0x10;
    local_70 = local_64;
    (**(code **)(*param_1 + 0x18))();
    puVar16 = (undefined1 *)param_1[1];
    if (local_64 != puVar16) {
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar11 = 0;
      do {
        if (*(char *)(param_1[1] + lVar11) == '\0') goto LAB_0376b854;
        lVar1 = param_1[1] + lVar11;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0376b854;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_0376b854;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_0376b854:
      iVar2 = (int)lVar11;
      if (local_68 <= (int)lVar11) {
        iVar2 = local_68 + -1;
      }
      memcpy(local_64,puVar16,(long)iVar2);
      local_64[iVar2] = 0;
    }
    local_78 = PTR_DAT_04bb2028 + 0x10;
    local_70[(long)local_68 + -1] = 0;
    (**(code **)(PTR_DAT_04bb2028 + 0x28))(&local_78);
    puVar16 = local_70;
    if (local_70 == &DAT_04061876) {
LAB_0376b900:
      *local_70 = 0;
      if (local_70 != &DAT_040a033e) {
        iVar2 = 3;
        if (local_68 < 4) {
          iVar2 = local_68 + -1;
        }
        memcpy(local_70,&DAT_040a033e,(long)iVar2);
        puVar16[iVar2] = 0;
      }
    }
    else {
      uVar12 = 0;
      bVar8 = true;
      do {
        if (local_70[uVar12] != (&DAT_04061876)[uVar12]) break;
        if (local_70[uVar12] == '\0') {
          if (bVar8) goto LAB_0376b900;
          break;
        }
        bVar8 = uVar12 < 0x80000;
        uVar12 = uVar12 + 1;
      } while (uVar12 != 0x80001);
    }
    (**(code **)(local_78 + 0x18))(&local_78);
    local_24 = FUN_006bd550(local_70,0);
    puVar9 = (uint *)FUN_03718680(lVar15,&local_24);
    puVar7 = PTR_DAT_04bc0678;
    puVar6 = PTR_DAT_04bc0670;
    if ((puVar9 != (uint *)0x0) && (uVar3 = *puVar9, uVar3 != 0)) {
      cVar13 = *PTR_DAT_04bc0670;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
          uVar3 = *puVar9;
        }
        else {
          uVar4 = *(uint *)puVar7;
          if (-1 < (int)uVar4) {
            if ((undefined2 *)((ulong)uVar4 + (long)puVar9) != (undefined2 *)0x0) {
              return *(undefined2 *)((ulong)uVar4 + (long)puVar9);
            }
            break;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar3;
        if (puVar5 == (uint *)0x0) {
          return 0xffff;
        }
        if (puVar9 == puVar5) {
          return 0xffff;
        }
        lVar15 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar9 + (lVar15 - (long)puVar5);
        if (lVar15 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
        *(undefined4 *)puVar7 = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar14 = (int *)(lVar15 + 4);
        while (piVar14[-1] != -0x62ea7268) {
          piVar14 = piVar14 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_0376ba7c;
        }
        iVar2 = 0;
        if (*piVar14 != -1) {
          iVar2 = *piVar14;
        }
        *(int *)puVar7 = iVar2;
        uVar3 = *puVar9;
        if (uVar3 == 0) {
          return 0xffff;
        }
      } while( true );
    }
LAB_0376ba7c:
    uVar10 = 0xffff;
  }
  return uVar10;
}

