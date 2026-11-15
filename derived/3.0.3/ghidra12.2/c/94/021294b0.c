
void FUN_021294b0(undefined8 param_1,undefined2 param_2,uint *param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  char cVar16;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  short local_28;
  undefined2 local_26;
  undefined1 local_24;
  
  puVar6 = PTR_DAT_04bb2208;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    local_58 = CONCAT44(local_58._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      return;
    }
  }
  iVar8 = FUN_027512f0(*(long *)PTR_DAT_04bb2208 + 0x1740,param_1);
  puVar7 = PTR_DAT_04bb6408;
  puVar1 = PTR_DAT_04bb6400;
  if (iVar8 < 0) {
    iVar8 = -1;
  }
  local_24 = 0;
  sVar4 = (short)iVar8;
  plVar12 = *(long **)PTR_DAT_04bb27d0;
  lVar14 = *plVar12;
  bVar3 = *(byte *)(lVar14 + 0x473);
  local_28 = sVar4;
  local_26 = param_2;
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(lVar14 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar2 = (byte *)(lVar14 + 0x48);
    }
    if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar14 + 0x472) != bVar3)) {
      lVar14 = *(long *)puVar6;
      uVar5 = (uint)sVar4;
      if ((int)*(uint *)(lVar14 + 0x1900) < 1) {
        if (*(long *)(lVar14 + 0x17f0) == 0) {
          return;
        }
        puVar15 = *(uint **)(*(long *)(lVar14 + 0x17f0) + 8);
        if (puVar15 == (uint *)0x0) {
          return;
        }
        if ((uVar5 < *(uint *)(lVar14 + 0x1808)) &&
           (*(char *)(*(long *)(lVar14 + 0x1810) + (long)(int)uVar5) == '\0')) {
          return;
        }
        if (*puVar15 <= uVar5) {
          return;
        }
        if (puVar15[1] == 0) {
          return;
        }
        if ((ushort)puVar15[2] == 0) {
          return;
        }
        iVar8 = 0xc;
        if (*(char *)((long)puVar15 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar15 = (uint *)((ulong)(puVar15[1] * uVar5 + (uint)(ushort)puVar15[2] * 8 + iVar8) +
                          (long)puVar15);
      }
      else {
        if (*(uint *)(lVar14 + 0x1900) <= uVar5) {
          return;
        }
        if (*(uint *)(lVar14 + 0x18f0) <= uVar5) {
          uVar5 = 0;
        }
        puVar15 = *(uint **)(*(long *)(lVar14 + 0x18f8) + (ulong)uVar5 * 8);
      }
      if (puVar15 == (uint *)0x0) {
        return;
      }
      if (*puVar15 == 0) {
        return;
      }
      cVar16 = *PTR_DAT_04bb6400;
      while( true ) {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar5 = *(uint *)(puVar7 + 8);
          if (-1 < (int)uVar5) {
            if ((short *)((ulong)uVar5 + (long)puVar15) == (short *)0x0) {
              return;
            }
            if (*(short *)((ulong)uVar5 + (long)puVar15) == 0) {
              return;
            }
            uVar9 = (ulong)local_58 >> 0x30;
            local_58 = CONCAT26((ushort)uVar9 & 0xff00,0xff0100000000);
            if (DAT_053d0b60 < 0) {
              return;
            }
            FUN_01db1df0(*plVar12 + 0x480,DAT_053d0b60,&local_58,&local_28,6,0);
            return;
          }
          if (uVar5 != 0xffffffff) {
            return;
          }
        }
        lVar14 = (long)puVar15 - (ulong)*puVar15;
        if (*puVar15 == 0) {
          return;
        }
        if (lVar14 == 0) break;
        lVar13 = 0xc;
        if (*(char *)(lVar14 + 10) != '\0') {
          lVar13 = 0x1c;
        }
        if (lVar13 + lVar14 == 0) {
          return;
        }
        uVar9 = (ulong)*(ushort *)(lVar14 + 8);
        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
        if (uVar9 == 0) {
          return;
        }
        piVar10 = (int *)(lVar13 + lVar14 + 4);
        while (piVar10[-1] != -0x332b3da1) {
          piVar10 = piVar10 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) {
            return;
          }
        }
        iVar8 = 0;
        if (*piVar10 != -1) {
          iVar8 = *piVar10;
        }
        *(int *)(puVar7 + 8) = iVar8;
        if (*puVar15 == 0) {
          return;
        }
      }
      return;
    }
  }
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar14 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))();
  if (lVar14 == 0) {
    return;
  }
  lVar13 = *(long *)(lVar14 + 0x276cd8);
  if (lVar13 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
      plVar12 = *(long **)(lVar13 + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      uVar9 = uVar9 & 0xffffffff;
      if (*(long *)(lVar14 + 0x276cd8) == 0) goto LAB_02129734;
      plVar12 = *(long **)(*(long *)(lVar14 + 0x276cd8) + 0x20);
    }
    if (plVar12 != (long *)0x0) {
      local_58 = *(long *)(lVar14 + 0x276cb8);
      local_50 = *(undefined8 *)(lVar14 + 0x276cc0);
      uStack_48 = 0x3fd140;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_58);
    }
  }
LAB_02129734:
  if (*param_3 < 8) {
    FUN_02751130(*(long *)(lVar14 + 0x276cc0) + *(long *)(lVar14 + 0x276cb8) +
                 (ulong)*param_3 * 0xd8 + 0x3c52f8,(int)sVar4,param_2);
  }
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar14 + 0x276cd8) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar14 + 0x276cd8) + 0x18), puVar11 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar11)();
  }
  return;
}

