
bool FUN_01fb7870(long param_1,short *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 *__src;
  undefined8 local_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  int local_b0;
  undefined1 auStack_ac [63];
  undefined1 local_6d;
  int local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined2 local_58;
  
  lVar11 = *(long *)PTR_DAT_04bb4970;
  if (((lVar11 != 0) && (*(long *)(lVar11 + 0xb0) != 0)) &&
     (*(long *)(*(long *)(lVar11 + 0xb0) + 8) != 0 && *param_2 != -2)) {
    uVar5 = FUN_0277d6c4(param_2);
    puVar4 = PTR_DAT_04bb7ea0;
    puVar3 = PTR_DAT_04bb7e98;
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (puVar6 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8), puVar6 != (uint *)0x0
       )) {
      if (*puVar6 != 0) {
        cVar7 = *PTR_DAT_04bb7e98;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
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
            *(undefined8 *)(puVar4 + 0xa0) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0xa8) = 0xffffffffffffffff;
          }
          else {
            uVar5 = *(uint *)(puVar4 + 0xa8);
            if (-1 < (int)uVar5) {
              if (((ulong)uVar5 + (long)puVar6 != 0) &&
                 ((*(byte *)((ulong)uVar5 + (long)puVar6 + 1) >> 1 & 1) != 0)) {
                return true;
              }
              break;
            }
            if (uVar5 != 0xffffffff) break;
          }
          puVar8 = (uint *)(ulong)*puVar6;
          if ((*puVar6 == 0) || (puVar6 == puVar8)) break;
          lVar11 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar6 + (lVar11 - (long)puVar8);
          if (lVar11 == 0) break;
          uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
          *(undefined4 *)(puVar4 + 0xa8) = 0xfffffffe;
          if (uVar9 == 0) break;
          piVar10 = (int *)(lVar11 + 4);
          while (piVar10[-1] != 0x3b8583f3) {
            piVar10 = piVar10 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto LAB_01fb7a50;
          }
          iVar2 = 0;
          if (*piVar10 != -1) {
            iVar2 = *piVar10;
          }
          *(int *)(puVar4 + 0xa8) = iVar2;
          if (*puVar6 == 0) break;
        } while( true );
      }
LAB_01fb7a50:
      puVar3 = PTR_PTR_04bb2238;
      local_6d = 0;
      local_b0 = 0x40;
      local_c0 = PTR_DAT_04bb2f70 + 0x10;
      local_c8 = 0;
      local_b8 = auStack_ac;
      (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
      __src = *(undefined1 **)(puVar3 + 8);
      if (auStack_ac != __src) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
        lVar11 = 0;
        do {
          if (*(char *)(*(long *)(puVar3 + 8) + lVar11) == '\0') goto LAB_01fb7afc;
          lVar1 = *(long *)(puVar3 + 8) + lVar11;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_01fb7afc;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_01fb7afc;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_01fb7afc:
        iVar2 = (int)lVar11;
        if (local_b0 <= (int)lVar11) {
          iVar2 = local_b0 + -1;
        }
        memcpy(auStack_ac,__src,(long)iVar2);
        auStack_ac[iVar2] = 0;
      }
      local_c0 = PTR_DAT_04bb2bc0 + 0x10;
      local_58 = 0;
      uStack_64 = *(undefined4 *)PTR_DAT_04bb37e0;
      local_60 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      uStack_5c = 0;
      local_68 = 0;
      FUN_02080ddc(param_1 + 0xafb8,&local_c8,param_2,param_3,param_4);
      return local_68 == 5;
    }
  }
  return false;
}

