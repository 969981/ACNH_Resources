
void FUN_01953930(undefined8 param_1,float *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  long local_78;
  uint local_70;
  uint uStack_6c;
  undefined4 local_68;
  
  FUN_0194a710(&local_78,0);
  puVar8 = PTR_DAT_04bb5db8;
  puVar7 = PTR_DAT_04bb5db0;
  puVar6 = PTR_DAT_04bb3fe8;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb27c0;
  puVar1 = PTR_DAT_04bb3fd0 + 0x10;
  puVar2 = PTR_DAT_04bb2e38 + 0x10;
  do {
    switch(local_68) {
    case 0:
      uVar14 = local_70;
      if (*(uint *)(local_78 + 0x288) <= local_70) {
        uVar14 = 0;
      }
      lVar13 = *(long *)(local_78 + 0x290) + (long)(int)uVar14 * 0x30;
      uVar14 = uStack_6c;
      if (*(uint *)(lVar13 + 0x10) <= uStack_6c) {
        uVar14 = 0;
      }
      puVar3 = (uint *)(*(long *)(lVar13 + 0x18) + (long)(int)uVar14 * 4);
      lVar13 = *(long *)puVar4;
      break;
    case 1:
      puVar3 = (uint *)(local_78 + 2000);
      lVar13 = *(long *)puVar4;
      break;
    case 2:
      puVar3 = (uint *)(local_78 + 0x860);
      lVar13 = *(long *)puVar4;
      break;
    case 3:
      puVar3 = (uint *)(local_78 + 0x8c4);
      lVar13 = *(long *)puVar4;
      break;
    case 4:
      puVar3 = (uint *)(local_78 + 0x8c8);
      lVar13 = *(long *)puVar4;
      break;
    case 5:
      return;
    default:
      lVar13 = *(long *)puVar4;
      puVar3 = (uint *)PTR_DAT_04bb3238;
    }
    if (lVar13 != 0) {
      uVar14 = *puVar3;
      if ((((uVar14 == 0) ||
           (plVar15 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                                ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
          ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar15 + 0x46) != uVar14)) {
        plVar15 = (long *)0x0;
      }
      if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
        plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
        lVar13 = *(long *)puVar4;
        iVar9 = (**(code **)(*plVar11 + 0x60))();
        if (iVar9 < 0x11) {
          uVar14 = 1;
        }
        else {
          if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_01953b10;
          uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01953b10:
        uVar14 = 0;
      }
      if (plVar15 != (long *)0x0) {
        if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar9 != 0)) {
          *(undefined **)puVar6 = puVar1;
          __cxa_guard_release(PTR_DAT_04bb3ff0);
        }
        uVar10 = (**(code **)(*plVar15 + 0x20))(plVar15,puVar6);
        if ((uVar14 & uVar10) == 1) {
          if ((long *)plVar15[0x16] != plVar15 + 0x15) {
            lVar13 = (long)*(int *)((long)plVar15 + 0xbc);
            plVar11 = (long *)(plVar15[0x16] - lVar13);
            do {
              if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar8), iVar9 != 0)) {
                *(undefined **)puVar7 = puVar2;
                __cxa_guard_release(puVar8);
              }
              if ((plVar11 != (long *)0x0) &&
                 (uVar12 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar7), (uVar12 & 1) != 0)) {
                lVar13 = *(long *)(plVar11[9] + 0x68);
                if ((lVar13 != 0) &&
                   (fVar16 = *param_2 - *(float *)(lVar13 + 0x278),
                   fVar17 = param_2[2] - *(float *)(lVar13 + 0x280),
                   SQRT(fVar17 * fVar17 + fVar16 * fVar16) < *(float *)(plVar11 + 0x53))) {
                  *(undefined4 *)(plVar11 + 0x56) = *(undefined4 *)((long)plVar11 + 700);
                }
                break;
              }
              plVar11 = (long *)(*(long *)((long)plVar11 + lVar13 + 8) - lVar13);
            } while (plVar11 != (long *)((long)(plVar15 + 0x15) - lVar13));
          }
        }
      }
    }
    FUN_0194afc0(&local_78);
  } while( true );
}

