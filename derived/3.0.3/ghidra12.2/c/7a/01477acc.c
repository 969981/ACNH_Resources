
float FUN_01477acc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *__s;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  int *piVar9;
  long *plVar10;
  uint *puVar11;
  char cVar12;
  float fVar13;
  float fVar14;
  undefined8 local_98;
  undefined4 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  
  local_98 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  local_90 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  fVar13 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_98,0);
  puVar2 = PTR_DAT_04bb27c0;
  fVar14 = 0.0;
  uVar4 = *(uint *)(param_1 + 0x2d4);
  if (uVar4 == 0) {
    return fVar13 + 0.0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0.0;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar4 >> 0x11) & 0x7ff8));
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar4)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar4 = 1;
      goto joined_r0x01477bdc;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01477bdc;
    }
  }
  uVar4 = 0;
joined_r0x01477bdc:
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0x2a];
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb5920);
    puVar2 = PTR_DAT_04bb43c0;
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar4;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      uStack_7c = *(undefined4 *)((long)plVar10 + 0x28c);
      local_78 = 0;
      local_88 = PTR_DAT_04bc0510 + 0x10;
      local_80 = (undefined4)plVar10[0x51];
      lVar7 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar2 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(plVar10 + 0x51);
          __s = PTR_DAT_04bbfe90;
          puVar2 = PTR_DAT_04bbfe88;
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
             ((puVar11 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8),
              puVar11 != (uint *)0x0 && (uVar4 = *puVar11, uVar4 != 0)))) {
            cVar12 = *PTR_DAT_04bbfe88;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                *puVar2 = 1;
                memset(__s,0xff,0x1ac);
                uVar4 = *puVar11;
              }
              else {
                uVar1 = *(uint *)(__s + 0x28);
                if (-1 < (int)uVar1) {
                  if ((float *)((ulong)uVar1 + (long)puVar11) != (float *)0x0) {
                    fVar14 = *(float *)((ulong)uVar1 + (long)puVar11);
                  }
                  break;
                }
                if (uVar1 != 0xffffffff) break;
              }
              puVar8 = (uint *)(ulong)uVar4;
              if ((puVar8 == (uint *)0x0) || (puVar11 == puVar8)) break;
              lVar7 = 0xc;
              if (*(char *)((long)puVar11 + (10 - (long)puVar8)) != '\0') {
                lVar7 = 0x1c;
              }
              lVar7 = (long)puVar11 + (lVar7 - (long)puVar8);
              if (lVar7 == 0) break;
              uVar6 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar8));
              *(undefined4 *)(__s + 0x28) = 0xfffffffe;
              if (uVar6 == 0) break;
              piVar9 = (int *)(lVar7 + 4);
              while (piVar9[-1] != -0x3e783aea) {
                piVar9 = piVar9 + 2;
                uVar6 = uVar6 - 1;
                if (uVar6 == 0) goto LAB_01477db4;
              }
              iVar3 = 0;
              if (*piVar9 != -1) {
                iVar3 = *piVar9;
              }
              *(int *)(__s + 0x28) = iVar3;
              uVar4 = *puVar11;
              if (uVar4 == 0) break;
            } while( true );
          }
        }
      }
LAB_01477db4:
      fVar14 = fVar13 + 0.0 + fVar14;
    }
  }
  return fVar14;
}

