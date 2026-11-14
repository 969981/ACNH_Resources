
void FUN_01953c70(long param_1,float *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  long local_80;
  uint local_78;
  uint uStack_74;
  undefined4 local_70;
  uint local_64;
  
  if (((DAT_052cba28 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_052cba28), iVar10 != 0)) {
    DAT_052cba20 = 900.0;
    __cxa_guard_release(&DAT_052cba28);
  }
  FUN_0194a710(&local_80,0);
  puVar8 = PTR_DAT_04bbe7a8;
  puVar7 = PTR_DAT_04bbe7a0;
  puVar6 = PTR_DAT_04bb5db8;
  puVar5 = PTR_DAT_04bb27c0;
  puVar1 = PTR_DAT_04bb3fd0 + 0x10;
  puVar2 = PTR_DAT_04bb2e38 + 0x10;
  puVar3 = PTR_DAT_04bbe648 + 0x10;
  do {
    switch(local_70) {
    case 0:
      uVar15 = local_78;
      if (*(uint *)(local_80 + 0x288) <= local_78) {
        uVar15 = 0;
      }
      lVar14 = *(long *)(local_80 + 0x290) + (long)(int)uVar15 * 0x30;
      uVar15 = uStack_74;
      if (*(uint *)(lVar14 + 0x10) <= uStack_74) {
        uVar15 = 0;
      }
      puVar4 = (uint *)(*(long *)(lVar14 + 0x18) + (long)(int)uVar15 * 4);
      lVar14 = *(long *)puVar5;
      break;
    case 1:
      puVar4 = (uint *)(local_80 + 2000);
      lVar14 = *(long *)puVar5;
      break;
    case 2:
      puVar4 = (uint *)(local_80 + 0x860);
      lVar14 = *(long *)puVar5;
      break;
    case 3:
      puVar4 = (uint *)(local_80 + 0x8c4);
      lVar14 = *(long *)puVar5;
      break;
    case 4:
      puVar4 = (uint *)(local_80 + 0x8c8);
      lVar14 = *(long *)puVar5;
      break;
    case 5:
      return;
    default:
      lVar14 = *(long *)puVar5;
      puVar4 = (uint *)PTR_DAT_04bb3238;
    }
    if (lVar14 != 0) {
      uVar15 = *puVar4;
      if ((((uVar15 == 0) ||
           (plVar16 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
          ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar15)) {
        plVar16 = (long *)0x0;
      }
      if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
        plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar14 = *(long *)puVar5;
        iVar10 = (**(code **)(*plVar12 + 0x60))();
        if (iVar10 < 0x11) {
          uVar15 = 1;
        }
        else {
          if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_01953e70;
          uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01953e70:
        uVar15 = 0;
      }
      if (plVar16 != (long *)0x0) {
        if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar10 != 0)) {
          *(undefined **)PTR_DAT_04bb3fe8 = puVar1;
          __cxa_guard_release(PTR_DAT_04bb3ff0);
        }
        uVar11 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3fe8);
        if ((uVar15 & uVar11) == 1) {
          local_64 = *(uint *)((long)plVar16 + 700);
          lVar14 = (long)*(int *)((long)plVar16 + 0xbc);
          uVar15 = local_64;
          if (*(uint *)(param_1 + 0x5f0) <= local_64) {
            uVar15 = 0;
          }
          plVar12 = (long *)(plVar16[0x16] - lVar14);
          plVar16 = (long *)((long)plVar16 + (0xa8 - lVar14));
          bVar9 = plVar12 != plVar16;
          if (*(char *)(*(long *)(param_1 + 0x5f8) + (long)(int)uVar15 * 8 + 1) == '\0') {
            while (bVar9) {
              if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                *(undefined **)PTR_DAT_04bb5db0 = puVar2;
                __cxa_guard_release(puVar6);
              }
              if ((plVar12 != (long *)0x0) &&
                 (uVar13 = (**(code **)(*plVar12 + 0x10))(plVar12,PTR_DAT_04bb5db0),
                 (uVar13 & 1) != 0)) {
                lVar14 = *(long *)(plVar12[9] + 0x68);
                if ((lVar14 != 0) &&
                   (fVar17 = *param_2 - *(float *)(lVar14 + 0x278),
                   fVar18 = param_2[2] - *(float *)(lVar14 + 0x280),
                   SQRT(fVar18 * fVar18 + fVar17 * fVar17) < *(float *)(plVar12 + 0x53))) {
                  *(undefined4 *)(plVar12 + 0x56) = *(undefined4 *)((long)plVar12 + 700);
                }
                break;
              }
              plVar12 = (long *)(*(long *)((long)plVar12 + lVar14 + 8) + -lVar14);
              bVar9 = plVar12 != plVar16;
            }
          }
          else {
            while (bVar9) {
              if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
                *(undefined **)puVar7 = puVar3;
                __cxa_guard_release(puVar8);
              }
              if ((plVar12 != (long *)0x0) &&
                 (uVar13 = (**(code **)(*plVar12 + 0x10))(plVar12,puVar7), (uVar13 & 1) != 0)) {
                fVar17 = *(float *)(plVar12[0x60] + 0x278) - *param_2;
                fVar18 = *(float *)(plVar12[0x60] + 0x280) - param_2[2];
                if (fVar18 * fVar18 + fVar17 * fVar17 < DAT_052cba20) {
                  fVar17 = param_2[2];
                  plVar12[0x93] = *(long *)param_2;
                  *(float *)(plVar12 + 0x94) = fVar17;
                  *(undefined1 *)((long)plVar12 + 0x4a7) = 1;
                }
                break;
              }
              plVar12 = (long *)(*(long *)((long)plVar12 + lVar14 + 8) + -lVar14);
              bVar9 = plVar12 != plVar16;
            }
          }
        }
      }
    }
    FUN_0194afc0(&local_80);
  } while( true );
}

