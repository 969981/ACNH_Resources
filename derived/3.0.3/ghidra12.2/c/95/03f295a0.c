
void FUN_03f295a0(uint *param_1,uint param_2,ulong param_3,uint param_4,long *param_5)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  size_t __size;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  PlayReport *this;
  void *pvVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  
  if ((param_1[0xe] & 1) == 0) {
    param_1[0x10] = param_2;
    param_1[0x11] = 0;
    uVar11 = (ulong)param_4;
    puVar8 = *(undefined8 **)PTR_DAT_04bc3578;
    if (param_5 == (long *)0x0) {
      param_5 = (long *)*puVar8;
    }
    uVar1 = puVar8[6];
    *(undefined8 *)(param_1 + 0x12) = puVar8[5];
    *(undefined8 *)(param_1 + 0x14) = uVar1;
    puVar4 = PTR_DAT_04bb2698;
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) {
      this = malloc(0x40);
    }
    else {
      plVar6 = param_5;
      if (param_5 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar8 = (undefined8 *)(lVar13 + 8);
        if (lVar5 != 0) {
          puVar8 = (undefined8 *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*puVar8;
      }
      this = (PlayReport *)(**(code **)(*plVar6 + 0x30))(plVar6,0x40,8);
    }
    nn::prepo::PlayReport::PlayReport(this);
    *(PlayReport **)(param_1 + 0xc) = this;
    uVar12 = param_1[0x10] * 0x82 + 0x85;
    if (0 < (int)uVar12) {
      lVar13 = *(long *)puVar4;
      if (lVar13 == 0) {
        pvVar7 = malloc((ulong)uVar12);
      }
      else {
        plVar6 = param_5;
        if (param_5 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar6 = (long *)(lVar13 + 8);
          if (lVar5 != 0) {
            plVar6 = (long *)(lVar5 + 0xa8);
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)uVar12,8);
      }
      if (pvVar7 != (void *)0x0) {
        *param_1 = uVar12;
        *(void **)(param_1 + 2) = pvVar7;
        nn::prepo::PlayReport::SetBuffer(*(void **)(param_1 + 0xc),(ulong)pvVar7);
        uVar12 = (uint)param_3;
        if (0 < (int)uVar12) {
          lVar13 = *(long *)puVar4;
          __size = (param_3 & 0xffffffff) << 3;
          if (lVar13 == 0) {
            pvVar7 = malloc(__size);
          }
          else {
            plVar6 = param_5;
            if (param_5 == (long *)0x0) {
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              plVar6 = (long *)(lVar13 + 8);
              if (lVar5 != 0) {
                plVar6 = (long *)(lVar5 + 0xa8);
              }
              plVar6 = (long *)*plVar6;
              if (plVar6 == (long *)0x0) {
                return;
              }
            }
            pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
          }
          if (pvVar7 == (void *)0x0) {
            return;
          }
          param_1[4] = uVar12;
          uVar9 = param_3 & 3;
          *(void **)(param_1 + 6) = pvVar7;
          if (uVar12 < 4) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            do {
              lVar13 = uVar10 * 8;
              uVar10 = uVar10 + 4;
              *(undefined8 *)(*(long *)(param_1 + 6) + lVar13) = 0;
              *(undefined8 *)(*(long *)(param_1 + 6) + lVar13 + 8) = 0;
              *(undefined8 *)(*(long *)(param_1 + 6) + lVar13 + 0x10) = 0;
              *(undefined8 *)(*(long *)(param_1 + 6) + lVar13 + 0x18) = 0;
            } while ((param_3 & 0xfffffffc) != uVar10);
          }
          if (uVar9 != 0) {
            lVar13 = uVar10 << 3;
            do {
              uVar9 = uVar9 - 1;
              *(undefined8 *)(*(long *)(param_1 + 6) + lVar13) = 0;
              lVar13 = lVar13 + 8;
            } while (uVar9 != 0);
          }
        }
        if (0 < (int)param_4) {
          lVar13 = *(long *)puVar4;
          if (lVar13 == 0) {
            pvVar7 = malloc(uVar11 << 3);
          }
          else {
            if (param_5 == (long *)0x0) {
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              puVar8 = (undefined8 *)(lVar13 + 8);
              if (lVar5 != 0) {
                puVar8 = (undefined8 *)(lVar5 + 0xa8);
              }
              param_5 = (long *)*puVar8;
              if (param_5 == (long *)0x0) {
                return;
              }
            }
            pvVar7 = (void *)(**(code **)(*param_5 + 0x30))(param_5,uVar11 << 3,8);
          }
          if (pvVar7 == (void *)0x0) {
            return;
          }
          param_1[8] = param_4;
          uVar9 = uVar11 & 3;
          *(void **)(param_1 + 10) = pvVar7;
          if (param_4 < 4) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            do {
              lVar13 = uVar10 * 8;
              uVar10 = uVar10 + 4;
              *(undefined8 *)(*(long *)(param_1 + 10) + lVar13) = 0;
              *(undefined8 *)(*(long *)(param_1 + 10) + lVar13 + 8) = 0;
              *(undefined8 *)(*(long *)(param_1 + 10) + lVar13 + 0x10) = 0;
              *(undefined8 *)(*(long *)(param_1 + 10) + lVar13 + 0x18) = 0;
            } while ((uVar11 & 0xfffffffc) != uVar10);
          }
          if ((param_4 & 3) != 0) {
            lVar13 = uVar10 << 3;
            do {
              uVar9 = uVar9 - 1;
              *(undefined8 *)(*(long *)(param_1 + 10) + lVar13) = 0;
              lVar13 = lVar13 + 8;
            } while (uVar9 != 0);
          }
        }
        param_1 = param_1 + 0xe;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = *param_1 | 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
  }
  return;
}

