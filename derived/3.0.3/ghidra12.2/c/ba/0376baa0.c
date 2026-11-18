
undefined2 FUN_0376baa0(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined *local_78;
  undefined1 *local_70;
  int local_68;
  undefined1 local_64 [31];
  undefined1 local_45;
  undefined4 local_24;
  
  lVar13 = *(long *)PTR_DAT_04bb4958;
  if (lVar13 != 0) {
    local_68 = 0x20;
    local_45 = 0;
    local_78 = PTR_DAT_04bb2a08 + 0x10;
    local_70 = local_64;
    (**(code **)(*param_1 + 0x18))();
    puVar14 = (undefined1 *)param_1[1];
    if (local_64 != puVar14) {
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar8 = 0;
      do {
        if (*(char *)(param_1[1] + lVar8) == '\0') goto LAB_0376bb6c;
        lVar1 = param_1[1] + lVar8;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_0376bb6c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_0376bb6c;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_0376bb6c:
      iVar2 = (int)lVar8;
      if (local_68 <= (int)lVar8) {
        iVar2 = local_68 + -1;
      }
      memcpy(local_64,puVar14,(long)iVar2);
      local_64[iVar2] = 0;
    }
    local_78 = PTR_DAT_04bb2028 + 0x10;
    local_70[(long)local_68 + -1] = 0;
    (**(code **)(PTR_DAT_04bb2028 + 0x28))(&local_78);
    puVar14 = local_70;
    if (local_70 == &DAT_04061876) {
LAB_0376bc10:
      *local_70 = 0;
      if (local_70 != &DAT_040a033e) {
        iVar2 = 3;
        if (local_68 < 4) {
          iVar2 = local_68 + -1;
        }
        memcpy(local_70,&DAT_040a033e,(long)iVar2);
        puVar14[iVar2] = 0;
      }
    }
    else {
      uVar9 = 0;
      bVar6 = true;
      do {
        if (local_70[uVar9] != (&DAT_04061876)[uVar9]) break;
        if (local_70[uVar9] == '\0') {
          if (bVar6) goto LAB_0376bc10;
          break;
        }
        bVar6 = uVar9 < 0x80000;
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x80001);
    }
    (**(code **)(local_78 + 0x18))(&local_78);
    local_24 = FUN_006bd550(local_70,0);
    puVar7 = (uint *)FUN_03718680(lVar13,&local_24);
    puVar5 = PTR_DAT_04bc0678;
    puVar4 = PTR_DAT_04bc0670;
    if (puVar7 != (uint *)0x0) {
      if (*puVar7 == 0) {
        return 0;
      }
      cVar10 = *PTR_DAT_04bc0670;
      while( true ) {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x40);
          if (-1 < (int)uVar3) {
            if ((undefined2 *)((ulong)uVar3 + (long)puVar7) == (undefined2 *)0x0) {
              return 0;
            }
            return *(undefined2 *)((ulong)uVar3 + (long)puVar7);
          }
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar11 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return 0;
        }
        if (puVar7 == puVar11) break;
        lVar13 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar7 + (lVar13 - (long)puVar11);
        if (lVar13 == 0) {
          return 0;
        }
        uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
        *(undefined4 *)(puVar5 + 0x40) = 0xfffffffe;
        if (uVar9 == 0) {
          return 0;
        }
        piVar12 = (int *)(lVar13 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) {
            return 0;
          }
        }
        iVar2 = 0;
        if (*piVar12 != -1) {
          iVar2 = *piVar12;
        }
        *(int *)(puVar5 + 0x40) = iVar2;
        if (*puVar7 == 0) {
          return 0;
        }
      }
      return 0;
    }
  }
  return 0xffff;
}

